#include <Arduino.h>
#include <BlastGate.h>

// ### PIN BELEGUNG ###
// Servos
const int servo1Pin = 9;
const int servo2Pin = 0;
// Taster
const int s1Pin = 0;
const int s2Pin = 0;
const int s3Pin = 0;
const int s4Pin = 0;
const int s5Pin = 0;
const int s6Pin = 0;
const int s7Pin = 0;
const int s8Pin = 0;
// Taster-LEDs
const int s1LedPin = 8;
const int s2LedPin = 9;
const int s3LedPin = 8;
const int s4LedPin = 9;
const int s5LedPin = 8;
const int s6LedPin = 9;
const int s7LedPin = 8;
const int s8LedPin = 9;

// PROGRAMMVARIABLEN
bool standbyMode = true;      // im Standby-Modus Servos Spannungslos schalten
bool delayTimeActive = false; // Nachlauf der Absaugung aktiv
BlastGate gate1 = BlastGate(0, 91, 47, servo1Pin);

void setup()
{
  Serial.begin(9600);
  gate1.close();
  Serial.println("Programm gestartet...");
}

void loop()
{
  gate1.open();
  delay(3000);
  gate1.half();
  delay(3000);
  gate1.close();
  delay(3000);
}