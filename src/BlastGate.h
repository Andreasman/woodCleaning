#ifndef BlastGate_h
#define BlastGate_h
#include "Arduino.h"
#include "Servo.h"
/*
Ansteuerung eines BlastGates
*/
class BlastGate
{
private:
    int _angelClose; // Winkel geschlossen
    int _angelOpen;  // Winkel geöffnet
    int _angelHalf;  // Winkel halb geöffnet - Nebenluftbetrieb
    int _servoPin;   // Ausgangspin des Servos
    Servo servo;

public:
    BlastGate(int close, int open, int half, int servoPin); // Konstruktor
    // Luftklappe öffnen
    void open();
    // Luftklappe schließen
    void close();
    // Luftklappe halb öffnen - Nebenluftbetrieb
    void half();
};
#endif