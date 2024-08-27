const int motorpin1 = 4,motorpin2 = 5,motorpin3= 6,motorpin4=7;
const  int switchpin1 = 0,switchpin2 =1,switchpin3 = 2,switchpin4 =3 ; 
int switchstate1 = 0,switchstate2 = 0,switchstate3 = 0,switchstate4 = 0;
   
void setup()
{
  pinMode(motorpin1 , OUTPUT);
  pinMode(motorpin2 , OUTPUT);
  pinMode(motorpin3 , OUTPUT);
  pinMode(motorpin4 , OUTPUT);
  pinMode(switchpin1, INPUT);
  pinMode(switchpin2, INPUT);
  pinMode(switchpin3, INPUT);
  pinMode(switchpin4, INPUT);
  Serial.begin(9600);
}
void loop()
{
  switchstate1=digitalRead(switchpin1);
  switchstate2=digitalRead(switchpin2);
  switchstate3=digitalRead(switchpin3);
  switchstate4=digitalRead(switchpin4);
  if(switchstate1 == HIGH)
{
  Serial.println('Forward');
  digitalWrite(motorpin1 , HIGH);
  digitalWrite(motorpin2 , LOW);
  digitalWrite(motorpin3 , HIGH);
  digitalWrite(motorpin4 , LOW);
}
  
if(switchstate2 == HIGH)
{
  Serial.println('Reverse');
  digitalWrite(motorpin1 , LOW);
  digitalWrite(motorpin2 , HIGH);
  digitalWrite(motorpin3 , LOW);
  digitalWrite(motorpin4 , HIGH);
}
if(switchstate3 == HIGH)
{
  Serial.println('Right');
  digitalWrite(motorpin1 , HIGH);
  digitalWrite(motorpin2 , LOW);
  digitalWrite(motorpin3 , LOW);
  digitalWrite(motorpin4 , LOW);
}
if(switchstate4 == HIGH)
{-
  Serial.println('Left');
  digitalWrite(motorpin1 , LOW);
  digitalWrite(motorpin2 , LOW);
  digitalWrite(motorpin3 , HIGH);
  digitalWrite(motorpin4 , LOW);
}
else
{
  Serial.println('Stop');
  digitalWrite(motorpin1 , LOW);
  digitalWrite(motorpin2 , LOW);
  digitalWrite(motorpin3 , LOW);
  digitalWrite(motorpin4 , LOW);
}
}
