void setup() {
  int i;
  for(i = 6; i <= 13; i++)
  {
    pinMode(i, OUTPUT);
  }

  Serial.begin(9600);

}

void motorOneUp();
void motorOneDown();
void motorTwoUp();
void motorTwoDown();
void motorThreeUp();
void motorThreeDown();
void motorFourUp();
void motorFourDown();

void wave();

void stoppage();

void loop(){
  if(Serial.available() > 0)
  {
    int sign= Serial.read();
    if( sign == 'q')
    {
      motorOneUp();
    }
    if( sign == 'w')
    {
      motorTwoUp();
    }
    if( sign == 'e')
    {
      motorThreeUp();
    }
    if( sign == 'r')
    {
      motorFourUp();
    }
    if(sign == 'z')
    {
      stoppage();
    }
     if( sign == 'a')
    {
      motorOneDown();
    }
    if( sign == 's')
    {
      motorTwoDown();
    }
    if( sign == 'd')
    {
      motorThreeDown();
    }
    if( sign == 'f')
    {
      motorFourDown();
    }
  }

}
void stoppage()
{
  int i;
  for(i = 6; i <= 13; i++)
  {
    digitalWrite(i, 0);
  }
}


void motorOneUp()
{
  digitalWrite(13, 0);
  digitalWrite(12, 1);
}
void motorOneDown()
{
  digitalWrite(13, 1);
  digitalWrite(12, 0);
}
void motorTwoUp()
{
  digitalWrite(11, 0);
  digitalWrite(10, 1);
}
void motorTwoDown()
{
  digitalWrite(11, 1);
  digitalWrite(10, 0);
}
void motorThreeUp()
{
  digitalWrite(9, 0);
  digitalWrite(8, 1);
}
void motorThreeDown()
{
  digitalWrite(9, 1);
  digitalWrite(8, 0);
}
void motorFourUp()
{
  digitalWrite(7, 0);
  digitalWrite(6, 1);
}
void motorFourDown()
{
  digitalWrite(7, 1);
  digitalWrite(6, 0);
}

