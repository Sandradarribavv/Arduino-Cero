Segundo circuito

int LedRojo=12;
int LedAzul=11;
int LedNaranja=10;
int Tiempo=200;
void setup()
{
  pinMode (LedRojo,OUTPUT);//Define LED Rojo como salida
  pinMode (LedAzul,OUTPUT);
  pinMode (LedNaranja,OUTPUT);
}

void loop()
{
 digitalWrite (LedRojo,HIGH);//Enciede LED Rojo
  delay (Tiempo);
  digitalWrite (LedRojo,LOW);
  delay (Tiempo);
  digitalWrite (LedAzul,HIGH);
  delay (Tiempo);
   digitalWrite (LedAzul,LOW);
  delay (Tiempo);
  digitalWrite (LedNaranja,HIGH);
  delay (Tiempo);
  digitalWrite (LedNaranja,LOW);
  delay (Tiempo);
           
}

// Es un uso de nombres o variables