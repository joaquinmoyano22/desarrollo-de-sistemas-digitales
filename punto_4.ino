const int pin = 2;
int LEDVERDE=11;
int LEDAMARILLO=12;
int LEDROJO=13;

void setup()
{
   pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARILLO, OUTPUT);
  pinMode(LEDROJO, OUTPUT);
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), FSEMAFORO, RISING);
}
 
void loop()
{
     digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);
      
}
 
void FSEMAFORO()
{
   digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   delay(5000);

}
