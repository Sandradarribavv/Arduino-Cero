### Cuarto circuito vídeo doceavo
#include<Servo.h>

Servo servo1;

int LEDV =4;
int LEDR =3;

int TRIG =6;
int ECHO =7;

int T;
int D;


void setup()
{
  Serial.begin(9600);
  
  pinMode(LEDV, OUTPUT);
  pinMode(LEDR, OUTPUT);
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  servo1.attach(5);
  
  delay(100);
  
}

void loop()
{
 digitalWrite(TRIG, HIGH);
 delay(10);
 digitalWrite(TRIG, LOW);
 
 T = pulseIn(ECHO, HIGH);
 D = T/59; 
  
 Serial.println(D);
  
  delay(100);
  if(D<100){
    open();
    onLedGreen();
    delay(5000);
  }
  else{
    close() ;
    onLedRed();
    delay(5000);
  }
}
void open(){
  servo1.write(180);
}
void close(){
  servo1.write(0);
}
void onLedRed(){
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDV, LOW);
}
void onLedGreen(){
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDV, HIGH);
}
void offLeds(){
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDV, LOW);
}

// CONTROL DE MOTOR CON SENSOR DE DISTANCIA