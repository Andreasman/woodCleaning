#include "BlastGate.h"
#include "Servo.h"
BlastGate::BlastGate(int angelClose, int angelOpen, int angelHalf, int servoPin)
{
    _angelClose = angelClose;
    _angelOpen = angelOpen;
    _angelHalf = angelHalf;
    servo.attach(servoPin);  // Servo mit Ausgangspin (pwm) verbinden
    servo.write(angelClose); // Initialzustand Klappe geschlossen
}

void BlastGate::close()
{
    servo.write(_angelClose);
    Serial.println("Servo schließen...");
    Serial.println("Winkel-Geschlossen: " + String(_angelClose));
}

void BlastGate::open()
{
    servo.write(_angelOpen);
    Serial.println("Servo öffnen...");
    Serial.println("Winkel-Offen: " + String(_angelOpen));
}

void BlastGate::half()
{
    servo.write(_angelHalf);
    Serial.println("Servo HALB...");
    Serial.println("Winkel-Halb: " + String(_angelHalf));
}
