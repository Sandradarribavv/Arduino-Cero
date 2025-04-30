Segundo circuito cuarto vídeo

int tiempo = 1000;
  
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
     EncenderTodos1 ();
     delay(tiempo);
     ApagarTodos();
     delay(tiempo);
}
 void EncenderTodos1 (){
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
   
}

void ApagarTodos (){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
 
}

// Son sus variables y sus funciones.


Segundo circuito quinto vídeo

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
     EncenderTodos (1000);
     ApagarTodos(500);
}
 void EncenderTodos (int tiempo){
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(tiempo);
}

void ApagarTodos (int tiempo){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(tiempo);
}

// Argumentos


Segundo circuito sexto vídeo

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
   if (3>4){
     EncenderTodos (1000);
     ApagarTodos(500);
     }else{
     EncenderTodos (1);
   
   }
}
 void EncenderTodos (int tiempo){
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(tiempo);
}

void ApagarTodos (int tiempo){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(tiempo);
}

// Condicionales

Segundo circuito septimo vídeo

char valor; 
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if(Serial.available()){
     valor = Serial.read();
     Serial.println(valor);
     if (valor == 'p')
       EncenderTodos (1000);
  }
  if(valor == 'w'){
  ApagarTodos(1000);
    
    }
  if(valor == 'v'){
  EncenderTodos (1000);
    ApagarTodos(1000);
    EncenderTodos (1000);
     ApagarTodos(1000);
    }

  }

 void EncenderTodos (int tiempo){
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(tiempo);
}

void ApagarTodos (int tiempo){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(tiempo);
}

// Monitor serial

