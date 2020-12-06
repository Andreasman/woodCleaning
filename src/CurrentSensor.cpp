#include "CurrentSensor.h"
#include "Arduino.h"

CurrentSensor::CurrentSensor(int sensorPin)
{
    _sensorPin = sensorPin;
}
float CurrentSensor::getCurrent()
{
    // interen Variablen für die Glättung
    float currentSensorValue = 0.0; // aktuell gemessener Sensorwert am Analogeingang
    float sumSensorValues = 0.0;    // Summe der Messwerte
    float averageSensorValue = 0.0; // geglätteter Sensorwert
    float current = 0.0;            // gemessener geglätteter Strom in Ampere

    // Messwerte glätten
    for (int x = 0; x < 150; x++)
    {                                                           // 150 Messzyklen aufnehmen
        currentSensorValue = analogRead(_sensorPin);            // Spannung messen
        sumSensorValues = sumSensorValues + currentSensorValue; // Messwerte aufaddieren
        delay(3);                                               // alle 3ms messen
    }
    averageSensorValue = sumSensorValues / 150.0; // Glätten des Sensorwerts, Mittelwert bilden

    /* ((averageSensorValue * (5.0 / 1024.0)) konvertiert die gelesene Spannung 0-5 Volt.
    2.5 Volt am Analogeingang entspricht 0 Ampere.
    0.185v(185mV) entsprechen 1 Ampere Stromaufnahme */
    current = (2.5 - (averageSensorValue * (5.0 / 1024.0))) / 0.185;
    return current;
}