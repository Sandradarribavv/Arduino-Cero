Tercer circuito

int tiempo=200; //La variable tiempo la asignamos el valor 200
int pin; //declaramos la variable pin,sin asignarle valor momentaneamente

void setup()
{
for (pin=8; pin<=12; pin++)//inicia pin con valor inicial 8 y se va incrementando hasta 12
  {
  pinMode (pin,OUTPUT); //pin asume el valor asignado y lo declara como salida
  }
}

void loop()
{
for (pin=8; pin<=12; pin++)
  {
  digitalWrite (pin,HIGH);
  delay (tiempo);
   digitalWrite (pin,LOW);
  delay (tiempo);
  }
}

// Es el uso en bucle de For