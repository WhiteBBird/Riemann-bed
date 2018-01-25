

extern int incomingByte = 0;

void flipLeft()
{
  firstRowUp();
  secondRowUp();
  thirdRowUp();
  fourthRowUp();
  delay(200);
  firstRowUp();
  secondRowUp();
  thirdRowUp();
  delay(200);
  firstRowUp();
  secondRowUp();
  delay(200);
  firstRowUp();
  delay(3000);

  incomingByte = 0;
}


void flipLeftReset()
{
  firstRowDown();
  secondRowDown();
  thirdRowDown();
  fourthRowDown();
  delay(200);
  firstRowDown();
  secondRowDown();
  thirdRowDown();
  delay(200);
  firstRowDown();
  secondRowDown();
  delay(200);
  firstRowDown();
  delay(3000);

  incomingByte = 0;
}


void flipRight()
{
  fifthRowUp();
  fourthRowUp();
  thirdRowUp();
  secondRowUp();
  delay(200);
  fifthRowUp();
  fourthRowUp();
  thirdRowUp();
  delay(200);
  fifthRowUp();
  fourthRowUp();
  delay(200);
  fifthRowUp();
  delay(3000);
  
  incomingByte = 0;
}

void flipRightReset()
{
  fifthRowDown();
  fourthRowDown();
  thirdRowDown();
  secondRowDown();
  delay(200);
  fifthRowDown();
  fourthRowDown();
  thirdRowDown();
  delay(200);
  fifthRowDown();
  fourthRowDown();
  delay(200);
  fifthRowDown();
  delay(3000);

  incomingByte = 0;
}

void bluetoothControl()
{
	if (incomingByte == 97)
		oneUp();
	if (incomingByte == 65)
		oneDown();
	//////////////////////////////////////
	if (incomingByte == 98)
		twoUp();
	if (incomingByte == 66)
		twoDown();
	/////////////////////////////////////
	if (incomingByte == 99)
		threeUp();
	if (incomingByte == 67)
		threeDown();
	///////////////////////////////////
	if (incomingByte == 100)
		fourUp();
	if (incomingByte == 68)
		fourDown();
	/////////////////////////////////////
	if (incomingByte == 101)
		fiveUp();
	if (incomingByte == 69)
		fiveDown();
	////////////////////////////////////
	if (incomingByte == 102)
		sixUp();
	if (incomingByte == 70)
		sixDown();
	/////////////////////////////////////
	if (incomingByte == 103)
		sevenUp();
	if (incomingByte == 71)
		sevenDown();
	////////////////////////////////////
	if (incomingByte == 104)
		eightUp();
	if (incomingByte == 72)
		eightDown();
	//////////////////////////////////
	if (incomingByte == 105)
		nineUp();
	if (incomingByte == 73)
		nineDown();
	//////////////////////////////////
	if (incomingByte == 106)
		tenUp();
	if (incomingByte == 74)
		tenDown();
	////////////////////////////////////
	if (incomingByte == 107)
		elevenUp();
	if (incomingByte == 75)
		elevenDown();
	/////////////////////////////////////
	if (incomingByte == 108)
		twelveUp();
	if (incomingByte == 76)
		twelveDown();
	/////////////////////////////////////
	if (incomingByte == 109)
		thirteenUp();
	if (incomingByte == 77)
		thirteenDown();
	////////////////////////////////////
	if (incomingByte == 110)
		fourteenUp();
	if (incomingByte == 78)
		fourteenDown();
	/////////////////////////////////////
	if (incomingByte == 111)
		fifteenUp();
	if (incomingByte == 79)
		fifteenDown();
	////////////////////////////////////
	if (incomingByte == 112)
		sixteenUp();
	if (incomingByte == 80)
		sixteenDown();
	//////////////////////////////////
	if (incomingByte == 113)
		seventeenUp();
	if (incomingByte == 81)
		seventeenDown();
	//////////////////////////////////
	if (incomingByte == 114)
		eighteenUp();
	if (incomingByte == 82)
		eighteenDown();
	////////////////////////////////////
	if (incomingByte == 115)
		nineteenUp();
   ///////////////////////////////////
	if (incomingByte == 83)
		nineteenDown();
	/////////////////////////////////////
	if (incomingByte == 116)
		twentyUp();
   //////////////////////////////////
	if (incomingByte == 84)
		twentyDown();
	/////////////////////////////////////
	if (incomingByte == 119)
		allStop();
    //////////////////////////////////
  if (incomingByte == 117)
    flipLeft();
  /////////////////////////////////////
  if (incomingByte == 118)
    flipRight();
  if (incomingByte == 85)
    flipLeftReset();
  /////////////////////////////////////
  if (incomingByte == 86)
    flipRightReset();
}


