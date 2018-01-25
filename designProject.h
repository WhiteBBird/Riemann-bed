
#define ONE_A 5
#define ONE_B 4
#define TWO_A 6
#define TWO_B 7
#define THREE_A 9
#define THREE_B 8
#define FOUR_A 11
#define FOUR_B 10
#define FIVE_A 42
#define FIVE_B 43 
#define SIX_A 20
#define SIX_B 21
#define SEVEN_A 19
#define SEVEN_B 18
#define EIGHT_A 16
#define EIGHT_B 17
#define NINE_A 14
#define NINE_B 15
#define TEN_A 3
#define TEN_B 2
#define ELEVEN_A 31
#define ELEVEN_B 30
#define TWELVE_A 29
#define TWELVE_B 28
#define THIRTEEN_A 26
#define THIRTEEN_B 27 
#define FOURTEEN_A 25
#define FOURTEEN_B 24
#define FIFTEEN_A 23
#define FIFTEEN_B 22
#define SIXTEEN_A 40
#define SIXTEEN_B 41
#define SEVENTEEN_A 39
#define SEVENTEEN_B 37
#define EIGHTEEN_A 36
#define EIGHTEEN_B 38
#define NINETEEN_A 34
#define NINETEEN_B 35
#define TWENTY_A 33
#define TWENTY_B 32



void allStop()
{
	int i;
	for (i = 2; i < 44; i++)
	{
		digitalWrite(i, 0);
	}
}

void oneUp()
{
	digitalWrite(ONE_A, 1);
	digitalWrite(ONE_B, 0);
}
void oneDown()
{
	digitalWrite(ONE_A, 0);
	digitalWrite(ONE_B, 1);
}
void oneStop()
{
	digitalWrite(ONE_A, 0);
	digitalWrite(ONE_B, 0);
}

void twoUp()
{
	digitalWrite(TWO_A, 1);
	digitalWrite(TWO_B, 0);
}
void twoDown()
{
	digitalWrite(TWO_A, 0);
	digitalWrite(TWO_B, 1);
}
void twoStop()
{
	digitalWrite(TWO_A, 0);
	digitalWrite(TWO_B, 0);
}

void threeUp()
{
	digitalWrite(THREE_A, 1);
	digitalWrite(THREE_B, 0);
}
void threeDown()
{
	digitalWrite(THREE_A, 0);
	digitalWrite(THREE_B, 1);
}
void threeStop()
{
	digitalWrite(THREE_A, 0);
	digitalWrite(THREE_B, 0);
}

void fourUp()
{
	digitalWrite(FOUR_A, 1);
	digitalWrite(FOUR_B, 0);
}
void fourDown()
{
	digitalWrite(FOUR_A, 0);
	digitalWrite(FOUR_B, 1);
}
void fourStop()
{
	digitalWrite(FOUR_A, 0);
	digitalWrite(FOUR_B, 0);
}

void fiveUp()
{
	digitalWrite(FIVE_A, 1);
	digitalWrite(FIVE_B, 0);
}
void fiveDown()
{
	digitalWrite(FIVE_A, 0);
	digitalWrite(FIVE_B, 1);
}
void fiveStop()
{
	digitalWrite(FIVE_A, 0);
	digitalWrite(FIVE_B, 0);
}

void sixUp()
{
	digitalWrite(SIX_A, 1);
	digitalWrite(SIX_B, 0);
}
void sixDown()
{
	digitalWrite(SIX_A, 0);
	digitalWrite(SIX_B, 1);
}
void sixStop()
{
	digitalWrite(SIX_A, 0);
	digitalWrite(SIX_B, 0);
}

void sevenUp()
{
	digitalWrite(SEVEN_A, 1);
	digitalWrite(SEVEN_B, 0);
}
void sevenDown()
{
	digitalWrite(SEVEN_A, 0);
	digitalWrite(SEVEN_B, 1);
}
void sevenStop()
{
	digitalWrite(SEVEN_A, 0);
	digitalWrite(SEVEN_B, 0);
}

void eightUp()
{
	digitalWrite(EIGHT_A, 1);
	digitalWrite(EIGHT_B, 0);
}
void eightDown()
{
	digitalWrite(EIGHT_A, 0);
	digitalWrite(EIGHT_B, 1);
}
void eightStop()
{
	digitalWrite(EIGHT_A, 0);
	digitalWrite(EIGHT_B, 0);
}

void nineUp()
{
	digitalWrite(NINE_A, 1);
	digitalWrite(NINE_B, 0);
}
void nineDown()
{
	digitalWrite(NINE_A, 0);
	digitalWrite(NINE_B, 1);
}
void nineStop()
{
	digitalWrite(NINE_A, 0);
	digitalWrite(NINE_B, 0);
}

void tenUp()
{
	digitalWrite(TEN_A, 1);
	digitalWrite(TEN_B, 0);
}
void tenDown()
{
	digitalWrite(TEN_A, 0);
	digitalWrite(TEN_B, 1);
}
void tenStop()
{
	digitalWrite(TEN_A, 0);
	digitalWrite(TEN_B, 0);
}

void elevenUp()
{
	digitalWrite(ELEVEN_A, 1);
	digitalWrite(ELEVEN_B, 0);
}
void elevenDown()
{
	digitalWrite(ELEVEN_A, 0);
	digitalWrite(ELEVEN_B, 1);
}
void elevenStop()
{
	digitalWrite(ELEVEN_A, 0);
	digitalWrite(ELEVEN_B, 0);
}

void twelveUp()
{
	digitalWrite(TWELVE_A, 1);
	digitalWrite(TWELVE_B, 0);
}
void twelveDown()
{
	digitalWrite(TWELVE_A, 0);
	digitalWrite(TWELVE_B, 1);
}
void twelveStop()
{
	digitalWrite(TWELVE_A, 0);
	digitalWrite(TWELVE_B, 0);
}

void thirteenUp()
{
	digitalWrite(THIRTEEN_A, 1);
	digitalWrite(THIRTEEN_B, 0);
}
void thirteenDown()
{
	digitalWrite(THIRTEEN_A, 0);
	digitalWrite(THIRTEEN_B, 1);
}
void thirteenStop()
{
	digitalWrite(THIRTEEN_A, 0);
	digitalWrite(THIRTEEN_B, 0);
}

void fourteenUp()
{
	digitalWrite(FOURTEEN_A, 1);
	digitalWrite(FOURTEEN_B, 0);
}
void fourteenDown()
{
	digitalWrite(FOURTEEN_A, 0);
	digitalWrite(FOURTEEN_B, 1);
}
void fourteenStop()
{
	digitalWrite(FOURTEEN_A, 0);
	digitalWrite(FOURTEEN_B, 0);
}

void fifteenUp()
{
	digitalWrite(FIFTEEN_A, 1);
	digitalWrite(FIFTEEN_B, 0);
}
void fifteenDown()
{
	digitalWrite(FIFTEEN_A, 0);
	digitalWrite(FIFTEEN_B, 1);
}
void fifteenStop()
{
	digitalWrite(FIFTEEN_A, 0);
	digitalWrite(FIFTEEN_B, 0);
}

void sixteenUp()
{
	digitalWrite(SIXTEEN_A, 1);
	digitalWrite(SIXTEEN_B, 0);
}
void sixteenDown()
{
	digitalWrite(SIXTEEN_A, 0);
	digitalWrite(SIXTEEN_B, 1);
}
void sixteenStop()
{
	digitalWrite(SIXTEEN_A, 0);
	digitalWrite(SIXTEEN_B, 0);
}

void seventeenUp()
{
	digitalWrite(SEVENTEEN_A, 1);
	digitalWrite(SEVENTEEN_B, 0);
}
void seventeenDown()
{
	digitalWrite(SEVENTEEN_A, 0);
	digitalWrite(SEVENTEEN_B, 1);
}
void seventeenStop()
{
	digitalWrite(SEVENTEEN_A, 0);
	digitalWrite(SEVENTEEN_B, 0);
}

void eighteenUp()
{
	digitalWrite(EIGHTEEN_A, 1);
	digitalWrite(EIGHTEEN_B, 0);
}
void eighteenDown()
{
	digitalWrite(EIGHTEEN_A, 0);
	digitalWrite(EIGHTEEN_B, 1);
}
void eighteenStop()
{
	digitalWrite(EIGHTEEN_A, 0);
	digitalWrite(EIGHTEEN_B, 0);
}

void nineteenUp()
{
	digitalWrite(NINETEEN_A, 1);
	digitalWrite(NINETEEN_B, 0);
}
void nineteenDown()
{
	digitalWrite(NINETEEN_A, 0);
	digitalWrite(NINETEEN_B, 1);
}
void nineteenStop()
{
	digitalWrite(NINETEEN_A, 0);
	digitalWrite(NINETEEN_B, 0);
}

void twentyUp()
{
	digitalWrite(TWENTY_A, 1);
	digitalWrite(TWENTY_B, 0);
}
void twentyDown()
{
	digitalWrite(TWENTY_A, 0);
	digitalWrite(TWENTY_B, 1);
}
void twentyStop()
{
	digitalWrite(TWENTY_A, 0);
	digitalWrite(TWENTY_B, 0);
}

void firstRowUp()
{
  fiveUp();
  tenUp();
  fifteenUp();
  twentyUp();
  delay(6000);
  fiveStop();
  tenStop();
  fifteenStop();
  twentyStop();
}

void secondRowUp()
{
  fourUp();
  nineUp();
  fourteenUp();
  nineteenUp();
  delay(6000);
  fourStop();
  nineStop();
  fourteenStop();
  nineteenStop();
}

void thirdRowUp()
{
  threeUp();
  eightUp();
  thirteenUp();
  eighteenUp();
  delay(6000);
  threeStop();
  eightStop();
  thirteenStop();
  eighteenStop();
}

void fourthRowUp()
{
  twoUp();
  sevenUp();
  twelveUp();
  seventeenUp();
  delay(6000);
  twoStop();
  sevenStop();
  twelveStop();
  seventeenStop();
}

void fifthRowUp()
{
  oneUp();
  sixUp();
  elevenUp();
  sixteenUp();
  delay(6000);
  oneStop();
  sixStop();
  elevenStop();
  sixteenStop();
}

void firstRowDown()
{
  fiveDown();
  tenDown();
  fifteenDown();
  twentyDown();
  delay(6000);
  fiveStop();
  tenStop();
  fifteenStop();
  twentyStop();
}

void secondRowDown()
{
  fourDown();
  nineDown();
  fourteenDown();
  nineteenDown();
  delay(6000);
  fourStop();
  nineStop();
  fourteenStop();
  nineteenStop();
}

void thirdRowDown()
{
  threeDown();
  eightDown();
  thirteenDown();
  eighteenDown();
  delay(6000);
  threeStop();
  eightStop();
  thirteenStop();
  eighteenStop();
}

void fourthRowDown()
{
  twoDown();
  sevenDown();
  twelveDown();
  seventeenDown();
  delay(6000);
  twoStop();
  sevenStop();
  twelveStop();
  seventeenStop();
}

void fifthRowDown()
{
  oneDown();
  sixDown();
  elevenDown();
  sixteenDown();
  delay(6000);
  oneStop();
  sixStop();
  elevenStop();
  sixteenStop();
}


