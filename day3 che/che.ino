void setup()
{
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 Serial.begin(9600);
  
}
int income;
void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
  }
  switch(income){
    case 'f':
         forward();
    break;
    case 'b':
         backward();
    break;
    case 'l':
         left();
    break;
    case 'r':
         right();
    break;
    case 's':
         stop();
    break;
  }}
    
   void forward(){
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }  
   void backward(){
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
  }  
   void left(){
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
  }  
   void right(){
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }  
   void stop(){
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }  