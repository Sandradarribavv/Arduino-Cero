//KY -028 Thermistor Module
byte NTCPin = A0;
#define SERIESRESISTOR 10000
#define NOMINAL_RESISTANCE 10000
#define NOMINAL_TEMPERATURE 25
#define BCOEFFICIENT 3950
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  float ADCvalue;
  float Resistance;
 
  // Leer el valor analógico
  ADCvalue = analogRead(NTCPin);
  Serial.print("Analog: ");
  Serial.print(ADCvalue);
  Serial.print(" = ");
 
  // Convertir el valor a resistencia usando la fórmula correcta
  Resistance = SERIESRESISTOR * (1023.0 / ADCvalue - 1);
 
  // Mostrar la resistencia
  Serial.print(Resistance);
  Serial.println(" Ohm");
 
  // Calcular la temperatura usando la ecuación de Steinhart-Hart
  float steinhart;
  steinhart = Resistance / NOMINAL_RESISTANCE; // (R/Ro)
  steinhart = log(steinhart); // ln(R/Ro)
  steinhart /= BCOEFFICIENT; // 1/B * ln(R/Ro)
  steinhart += 1.0 / (NOMINAL_TEMPERATURE + 273.15); // + (1/To)
  steinhart = 1.0 / steinhart; // Invertir
  steinhart -= 273.15; // Convertir a °C
 
  // Mostrar la temperatura
  Serial.print(steinhart);
  Serial.println(" °C");
 
  // Esperar 1 segundo
  delay(1000);
}