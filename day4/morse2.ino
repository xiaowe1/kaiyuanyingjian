int pin = 13;
void dot() {   digitalWrite(pin, HIGH);   delay(250);   digitalWrite(pin, LOW);   delay(250); }   
void dash() {   digitalWrite(pin, HIGH);   delay(1000);   digitalWrite(pin, LOW);   delay(250); }
void setup() {

  Serial.begin(9600);
   pinMode(pin, OUTPUT); 
}

void loop() 
{
  char MOR[][4] = {
  {'.', '-', '*', '*'}, //A
  {'-', '.', '.', '.'}, //B
  {'-', '.', '-', '.'}, //C
  {'-', '.', '.', '*'}, //D
  {'.', '*', '*', '*'}, //E
  {'.', '.', '-', '.'}, //F
  {'-', '-', '.', '*'}, //G
  {'.', '.', '.', '.'}, //H
  {'.', '.', '*', '*'}, //I
  {'.', '-', '-', '-'}, //J
  {'-', '.', '-', '*'}, //K
  {'.', '-', '.', '.'}, //L
  {'-', '-', '*', '*'}, //M
  {'-', '.', '*', '*'}, //N
  {'-', '-', '-', '*'}, //O
  {'.', '-', '-', '.'}, //P
  {'-', '-', '.', '-'}, //Q
  {'.', '-', '.', '*'}, //R
  {'.', '.', '.', '*'}, //S
  {'-', '*', '*', '*'}, //T
  {'.', '.', '-', '*'}, //U
  {'.', '.', '.', '-'}, //V
  {'.', '-', '-', '*'}, //W
  {'-', '.', '.', '-'}, //X
  {'-', '.', '-', '-'}, //Y
  {'-', '-', '.', '.'}  //Z
};
  String s = ""; 
  String morse = ""; 
  int i, t , te = 0,n=0;

  while (Serial.available() > 0)
  {
    te = 1;  
    s += char(Serial.read());
    delay(2);
    n++;
  }

  if (te) {
    for (i = 0; i < n; i++)
    {
      for (t = 0; t < 4; t++)
      {
        if (s[i] >= 97 && s[i] <= 122)
        {
          morse += char(MOR[int(s[i] - 97)][t]);
        }
      }
      morse += ' ';
    }
    Serial.println(morse);
    for(i=0;i<=4*n;i++)
    {if(morse[i]=='.')
      dot();
     if(morse[i]=='-')
      dash();
    }
  }
  delay(2);
}
