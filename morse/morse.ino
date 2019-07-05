#include <Morse.h>
 
Morse morse(13);
 
void xianshi(char a)
{
switch(a) {
  case('a'):morse.dot(); morse.dash(); break; //A
  case('b'):morse.dash();   morse.dot(); morse.dot();   morse.dot();break; //B
  case('c'):morse.dash();  morse.dot(); morse.dash();  morse.dot();break; //C
  case('d'):morse.dash();  morse.dot();  morse.dot(); break;//D
  case('e'):morse.dot(); break; //E
  case('f'):morse.dot();  morse.dot();  morse.dash();  morse.dot();break; //F
  case('g'):morse.dash();  morse.dash(); morse.dot();break; //G
  case('h'):morse.dot();   morse.dot();   morse.dot();  morse.dot();break; //H
  case('i'):morse.dot();   morse.dot();break;//I
  case('j'):morse.dot(); morse.dash();  morse.dash();  morse.dash(); break;//J
  case('k'):morse.dash();   morse.dot();  morse.dash();break; //K
  case('l'):morse.dot();  morse.dash();  morse.dot();  morse.dot(); break;//L
  case('m'):morse.dash();  morse.dash();break;//M
  case('n'):morse.dash();   morse.dot(); break; //N
  case('o'):morse.dash(); morse.dash(); morse.dash(); break;//O
  case('p'):morse.dot(); morse.dash();  morse.dash();  morse.dot(); break;//P
  case('q'):morse.dash(); morse.dash();  morse.dot(); morse.dash();break;//Q
  case('r'):morse.dot();  morse.dash(); morse.dot(); break; //R
  case('s'):morse.dot();   morse.dot();  morse.dot(); break; //S
  case('t'):morse.dash(); break; //T
  case('u'):morse.dot();  morse.dot();  morse.dash(); break; //U
  case('v'):morse.dot();  morse.dot();   morse.dot(); morse.dash();break; //V
  case('w'):morse.dot();  morse.dash(); morse.dash();break; //W
  case('x'):morse.dash();  morse.dot();  morse.dot(); morse.dash(); break;//X
  case('y'):morse.dash();  morse.dot(); morse.dash();  morse.dash(); break;//Y
  case('z'):morse.dash(); morse.dash();   morse.dot();   morse.dot();break;  //Z
};
}

void setup() {
  Serial.begin(9600);
   pinMode(13, OUTPUT); 
}

void loop() {
  String s = ""; 
  int i, te=0,n=0;

  while (Serial.available() > 0) {
    te = 1;  
    s += char(Serial.read());
    delay(2);
    n++;
  }
  if(te==1)
  {
    for(i=0;i<=n;i++)
    {
      xianshi(s[i]);
    }
  }
    delay(2);
  }
