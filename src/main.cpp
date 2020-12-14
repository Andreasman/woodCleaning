#include <Arduino.h>
#include <BlastGate.h>
#include <CurrentSensor.h>
#include <Servo.h>

// ### PIN BELEGUNGEN ###
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
// Relais-PINs
const int k1Machine1Pin=0;
const int k2Machine2Pin=0;
const int k3ServoPoperPin=0;
// Stromsensoren Automatik-Steckdosen
const int currentSensorPlug1Pin=0;
const int currentSenosrPlug2Pin=0;
const int currentSensorPlug3Pin=0;
const int currentSenosrPlug4Pin=0;
const int currentSensorPlug5Pin=0;
const int currentSenosrPlug6Pin=0;
const int currentSensorPlug7Pin=0;
const int currentSenosrPlug8Pin=0;
// Servo PINs
const int servo1Pin = 0;
const int servo2Pin = 0;
const int servo3Pin = 0;
const int servo4Pin = 0;
const int servo5Pin = 0;
const int servo6Pin = 0;
const int servo7Pin = 0;
const int servo8Pin = 0;
// Stromsensoren Servoüberwachung
const int currentSensorServo1Pin = 0;
const int currentSensorServo2Pin = 0;
const int currentSensorServo3Pin = 0;
const int currentSensorServo4Pin = 0;
const int currentSensorServo5Pin = 0;
const int currentSensorServo6Pin = 0;
const int currentSensorServo7Pin = 0;
const int currentSensorServo8Pin = 0;



// PROGRAMMVARIABLEN
bool standbyMode = true;          // im Standby-Modus Servos Spannungslos schalten
bool delayTimeActive = false;     // Nachlauf der Absaugung aktiv
BlastGate gate1;                  // Blastgate 1 - Objekt
BlastGate gate2;                  // Blastgate 2 - Objekt
CurrentSensor currentSensor1(A0); // Stromsensor 1 - Objekt

int count = 0;

void setup()
{
  delay(3000);
  Serial.begin(9600);
  gate1.initServo(180, 0, 90, servo1Pin); // Servo für Gate1 initialisieren

  gate2.initServo(11, 11, 11, servo2Pin); // Servo für Gate1 initialisieren
  Serial.println("Programm gestartet...");
}

void loop()
{
  gate1.open();
  Serial.println();
  Serial.println(count);
  Serial.println("gemessener Strom: " + String(currentSensor1.getCurrent()) + " Ampere");
  Serial.println("MAX Strom: " + String(currentSensor1.getCurrentMax()) + " Ampere");

  delay(5000);
  count++;
  if (count >= 5)
  {
    count = 0;
    currentSensor1.resetCurrentMax();
  }
  gate1.close();
  Serial.println();
  Serial.println(count);
  Serial.println("gemessener Strom: " + String(currentSensor1.getCurrent()) + " Ampere");
  Serial.println("MAX Strom: " + String(currentSensor1.getCurrentMax()) + " Ampere");
  delay(5000);
}