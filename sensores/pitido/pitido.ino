// KY-006 Passive Buzzer Module

#define BUZZER 8

void setup() {
    pinMode(BUZZER, OUTPUT);
}

void loop() {
    digitalWrite(BUZZER, HIGH);   // Buzzer encendido
    delay(500);                   // Esperar 500 ms
    digitalWrite(BUZZER, LOW);    // Buzzer apagado
    delay(500);                   // Esperar 500 ms
}