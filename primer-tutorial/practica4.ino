Cuarto circuito 

int tiempo=100;
int pin;

void setup()
{
for (pin=7;pin<=12;pin++)
  {
   pinMode(pin,OUTPUT);
  }
}
void loop()
{
secuencia_uno ();
secuencia_dos ();
}
//subrutina

void secuencia_uno()
{
for (pin=7;pin<=12;pin++)
  {
  digitalWrite(pin,HIGH);
  delay(tiempo);
  digitalWrite(pin,LOW);
  delay(tiempo);
  }
}
void secuencia_dos()
{
 for (pin=12;pin>=7;pin--) 
   {
   digitalWrite(pin,HIGH);
   delay(tiempo);
   digitalWrite(pin,LOW);
   delay(tiempo);
   }
}

// Es un uso de subrutinas
