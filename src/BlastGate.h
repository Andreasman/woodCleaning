#ifndef BlastGate_h
#define BlastGate_h
#include "Arduino.h"
#include "Servo.h"
/*
Ansteuerung eines BlastGates mit einem Modellbauservo.
*/
class BlastGate
{
private:
    int _angelClose; // Winkel Klappe geschlossen
    int _angelOpen;  // Winkel Klappe geöffnet
    int _angelHalf;  // Winkel Klappe halb geöffnet - Nebenluftbetrieb
    int _servoPin;   // Ausgangspin des Servos
    Servo servo;     // Servo Controller

public:
    // BlastGate(); // Standartkonstruktor
    // BlastGate(int close, int open, int half, int servoPin); // Konstruktor
    // Servo initialisieren
    void initServo(int angelClose, int angelOpen, int angelHalf, int servoPin);
    // Luftklappe öffnen
    void open();
    // Luftklappe schließen
    void close();
    // Luftklappe halb öffnen - Nebenluftbetrieb
    void half();
    // Servo servo;
};
#endif