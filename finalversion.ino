#include "designProject.h"
#include "bluetoothControl.h"
void setup() {
  int i;
  for(i = 2; i < 44; i++)
{
  pinMode(i, OUTPUT);
}

  Serial.begin(9600);

}
//int incomingByte = 0;
// the above variable "incomingByte" is defined as a external variable in the head file in bluetoothControl.h

void bluetoothControl();
void flipLeft();
void flipLeftReset();
void flipRight();
void flipRightReset();

void loop()
{
   if (Serial.available() > 0) 
   {
        // read the incoming byte:
        incomingByte = Serial.read();

        // say what you got:
        Serial.print("I received: ");
        Serial.println(incomingByte);
        bluetoothControl();
    }
}




