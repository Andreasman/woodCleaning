#include "BlastGate.h"
#include "Servo.h"
#include "Arduino.h"

void BlastGate::initServo(int angelClose, int angelOpen, int angelHalf, int servoPin)
{
    Serial.println("Servo initialisieren..........");
    _angelClose = angelClose;
    _angelOpen = angelOpen;
    _angelHalf = angelHalf;
    _servoPin = servoPin;
    servo.attach(_servoPin); // Servo mit Ausgangspin (pwm) verbinden
}
void BlastGate::close()
{
    servo.write(_angelClose);
    Serial.println("Servo " + String(_servoPin) + " schließen...");
    Serial.println("Winkel-Geschlossen: " + String(_angelClose));
    Serial.println(servo.read());
    Serial.println();
}

void BlastGate::open()
{
    servo.write(_angelOpen);
    Serial.println("Servo " + String(_servoPin) + " öffnen...");
    Serial.println("Winkel-Offen: " + String(_angelOpen));
    Serial.println(servo.read());
    Serial.println();
}

void BlastGate::half()
{
    servo.write(_angelHalf);
    Serial.println("Servo " + String(_servoPin) + " halb...");
    Serial.println("Winkel-Halb: " + String(_angelHalf));
    Serial.println(servo.read());
    Serial.println();
}
