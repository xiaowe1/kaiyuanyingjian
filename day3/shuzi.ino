void xianshi(int a)
{
  switch(a)
  {
    case(0):digitalWrite(6, LOW);digitalWrite(7, LOW);digitalWrite(3, LOW);digitalWrite(4, LOW);break;
    case(1):digitalWrite(6, HIGH);digitalWrite(7, LOW);digitalWrite(3, LOW);digitalWrite(4, LOW);break;
    case(2):digitalWrite(6, LOW);digitalWrite(7, HIGH);digitalWrite(3, LOW);digitalWrite(4, LOW);break;
    case(3):digitalWrite(6, HIGH);digitalWrite(7, HIGH);digitalWrite(3, LOW);digitalWrite(4, LOW);break;
    case(4):digitalWrite(6, LOW);digitalWrite(7, LOW);digitalWrite(3, HIGH);digitalWrite(4, LOW);break;
    case(5):digitalWrite(6, HIGH);digitalWrite(7, LOW);digitalWrite(3, HIGH);digitalWrite(4, LOW);break;
    case(6):digitalWrite(6, LOW);digitalWrite(7, HIGH);digitalWrite(3, HIGH);digitalWrite(4, LOW);break;
    case(7):digitalWrite(6, HIGH);digitalWrite(7, HIGH);digitalWrite(3, HIGH);digitalWrite(4,LOW);break;
    case(8):digitalWrite(6, LOW);digitalWrite(7, LOW);digitalWrite(3, LOW);digitalWrite(4, HIGH);break;
    case(9):digitalWrite(6, HIGH);digitalWrite(7, LOW);digitalWrite(3, LOW);digitalWrite(4, HIGH);break;
    
  }
}
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);

}

void loop()
{

  String str = ""; 
  String shu = ""; 
   int i, t , temp = 0,n=0;
while (Serial.available() > 0) 
{ 
    str += char(Serial.read());
    delay(2);
    n++;
}
  for(i=0;i<n;i++)
  {
    xianshi(int(str[i]-48));
    delay(1000);
  }
}
