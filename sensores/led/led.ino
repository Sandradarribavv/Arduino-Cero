// KY-009 SMD RGB LED Module

int PinRojo = 11;
int PinAzul =10;
int PinVerde = 9;
int valor;
 
void setup() {
  pinMode(PinRojo, OUTPUT);
  pinMode(PinAzul, OUTPUT);
  pinMode(PinVerde, OUTPUT);
  Serial.begin(9600);
}
 
void loop(){
  for(valor = 255; valor > 0; valor--){
    analogWrite(PinRojo, valor);
    analogWrite(PinAzul, 255 - valor);
    analogWrite(PinVerde, 128 - valor);
    Serial.println(valor);
    delay(1);
  }
  for(valor = 0; valor < 255; valor++){
    analogWrite(PinRojo, valor);
    analogWrite(PinAzul, 255 - valor);
    analogWrite(PinVerde, 128 - valor);
    Serial.println(valor);
    delay(1);
  }
}