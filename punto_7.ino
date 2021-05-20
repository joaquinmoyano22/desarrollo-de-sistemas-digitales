const int pin = 2;
const int EchoPin = 4;
const int TriggerPin = 3;
float distancia;
long tiempo;
void setup()
{
  
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   pinMode(TriggerPin, OUTPUT);
   pinMode(EchoPin, INPUT);
   attachInterrupt(digitalPinToInterrupt(pin), pulsador, RISING);
}
 
void loop()
{
  digitalWrite(TriggerPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  tiempo = (pulseIn(EchoPin, HIGH)/2); 

  distancia = float(tiempo * 0.0343);
}
 
void pulsador()
{
Serial.print ("la distancia es de ");
  Serial.print (distancia);
  Serial.println("cm");
}
