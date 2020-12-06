#include <Arduino.h>
#include <BlastGate.h>
#include <Servo.h>

// ### PIN BELEGUNG ###
// Servos
int servo1Pin = 10;      // Pin Servo 1
const int servo2Pin = 9; // Pin Servo 2
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
BlastGate gate1;              // Blastgate 1 - Objekt erzeugen
BlastGate gate2;              // Blastgate 2 - Objekt erzeugen

void setup()
{
  delay(3000);
  Serial.begin(9600);
  gate1.initServo(10, 90, 46, servo1Pin); // Servo für Gate1 initialisieren
  gate2.initServo(2, 88, 33, servo2Pin);  // Servo für Gate1 initialisieren
  Serial.println("Programm gestartet...");
}

void loop()
{
  gate1.open();
  delay(3000);
  gate1.half();
  delay(3000);
  gate2.half();
  delay(1500);
  gate2.open();
  delay(1500);
}