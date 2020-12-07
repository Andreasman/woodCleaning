#ifndef CurrentSensor_h
#define CurrentSensor_h
#include "Arduino.h"

/*
Stromsensor-Controller für den ACS712. Nimmt alle 3ms eine Anzahl von 150 Messwerten auf, 
Glättet den Wert und gibt die Stromaufnahme in Ampere aus. 
Speichert den maximal Aufgenommen Strom, welcher zurückgesetzt werden kann.
*/
class CurrentSensor
{
private:
    float _current;    // Stromaufnahme in Ampere
    float _currentMax; // gespeicherter maximal aufgenommener Strom
    int _sensorPin;    // Analog-Eingangspin des Sensors

public:
    CurrentSensor(int sensorPin); // Konstruktor
    float getCurrent();           // gemessenen Strom in Ampere auslesen
    void resetCurrentMax();       // maximal aufgenommenen Strom zurücksetzen auf 0 Ampere
    float getCurrentMax();        // maximal aufgenommener Strom in Ampere auslesen
};

#endif
