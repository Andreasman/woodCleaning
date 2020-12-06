#ifndef CurrentSensor_h
#define CurrentSensor_h
#include "Arduino.h"

/*
Stromsensor-Controller für den ACS712. Nimmt alle 3ms eine Anzahl von 150 Messwerten auf, 
Glättet den Wert und gibt die Stromaufnahme aus.
*/
class CurrentSensor
{
private:
    float _current; // Stromaufnahme in Ampere
    int _sensorPin; // Analog-Eingangspin des Sensors
public:
    CurrentSensor(int sensorPin); // Konstruktor
    float getCurrent();           // gemessenen Strom in Ampere auslesen
};

#endif
