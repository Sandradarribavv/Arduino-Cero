// ky-038 small microfone module

const int pinMicrofono = 9;  // Pin donde está conectado el micrófono
const int pinLED = 13;  // Pin del LED

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinMicrofono, INPUT);
}

void loop() {
  bool sonidoDetectado = digitalRead(pinMicrofono);
  if (sonidoDetectado) {
    digitalWrite(pinLED, HIGH);
  } else {
    digitalWrite(pinLED, LOW);
  }
  delay(100);
}