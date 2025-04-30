Quinto circuito

void setup()
{
//no es necesario definir puertos de salida de la instrucción analogWrite
}

void loop()
{
for(int i=0;i<=255;i++)
  {  
   analogWrite(11,i); //Esto simula salida analógica de 0 a 5v, dividido en 255 intervalos
   analogWrite(10,i);
   analogWrite(9,i);
   delay(9);
  }
  
for(int i=0;i<=255;i--)
  {
  analogWrite(11,i); 
   analogWrite(10,i);
   analogWrite(9,i);
  delay(9);
  }
}

// Son salidas analógicas PWM