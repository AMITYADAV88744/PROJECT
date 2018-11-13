int c=0;
int previous=LOW;
void setup()
{
  pinMode(9,INPUT);
  for(int i=0;i<9;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}


int AllLedOff()
{
  for(int i=1;i<5;i++)
  {
    digitalWrite(i,LOW);
  }
}


int blink()
{
  for(int i=1;i<9;i++)
  {
    digitalWrite(i,LOW);
  }
  delay(250);
  for(int i=1;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(250);
}


int s1()
{
  digitalWrite(1,HIGH);
}


int s2()
{
  digitalWrite(2,HIGH);
}


int s3()
{
  digitalWrite(3,HIGH);
}


int s4()
{
  digitalWrite(4,HIGH);
}


int s5()
{
  AllLedOff();
  digitalWrite(5,HIGH);
}


int s6()
{
  AllLedOff();
  digitalWrite(6,HIGH);
}


int s7()
{
  AllLedOff();
  digitalWrite(7,HIGH);
}


int s8()
{
  
  digitalWrite(8,HIGH);
}

void loop()
{
  int current=digitalRead(9);
  if(current==HIGH&&previous==LOW)
  {
    c++;
  }
    previous=current;
  
  current=LOW;

  if(c==1||c==6||c==11||c==11||c==16)
  {
    s1();
  }
  if(c==2||c==7||c==12||c==17)
  {
    s2();
  }
  if(c==3||c==8||c==13||c==18)
  {
    s3();
  }
  if(c==4||c==9||c==14||c==19)
  {
    s4();
  }
  if(c==5)
  {
    s5();
  }
  if(c==10)
  {
    s6();
  }
  if(c==15)
  {
    s7();
  }
  if(c==20)
  {
    s8();
  }
  if(c>21)
  {
    digitalWrite(10,HIGH);
    digitalWrite(0,HIGH);
    blink();
  }
}
