const int ledrojo =  13;    
const int ledverde =  12;    
const int ledamarillo = 11;
const int pin = 2;
int contador = 0;
boolean habilitado = false;
unsigned long tiempo2 = 0;
unsigned long tiempo1;
void setup() {
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), fcontador, RISING);
Serial.begin(9600);
pinMode(ledrojo, OUTPUT); 
pinMode(ledverde, OUTPUT);           
pinMode(ledamarillo, OUTPUT);
}

void loop(){ 
  
    if(habilitado==false){
      tiempo1=millis()/200;
    
    if(tiempo1-tiempo2<10){
      digitalWrite(ledverde,HIGH);
                digitalWrite(ledamarillo,LOW);
        
          digitalWrite(ledrojo,LOW);
      } 
    if(tiempo1-tiempo2==10){
      digitalWrite(ledamarillo, HIGH);
   digitalWrite(ledverde,LOW);
          digitalWrite(ledrojo,LOW);
      }
    if(tiempo1-tiempo2 == 12){
   digitalWrite(ledamarillo, LOW);
   digitalWrite(ledrojo,HIGH); 
 digitalWrite(ledverde,LOW);

       }
        if(tiempo1-tiempo2 == 22){
   digitalWrite(ledrojo, LOW);
   digitalWrite(ledverde,HIGH);
      tiempo2=tiempo1;
       }}else if(habilitado==true){
        
          digitalWrite(ledamarillo,HIGH);
          digitalWrite(ledverde,HIGH);
          digitalWrite(ledrojo,HIGH);
          tiempo2=tiempo1;
 
        }
       
}
void fcontador(){
habilitado=!habilitado;
          digitalWrite(ledamarillo,LOW);
          digitalWrite(ledverde,LOW);
          digitalWrite(ledrojo,LOW);
          
         
}    
