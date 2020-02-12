//Define some pins!
#define BLUE 3
#define GREEN 5
#define RED 6
void setup() {
	pinMode(RED, OUTPUT);
	pinMode(GREEN, OUTPUT);
	pinMode(BLUE, OUTPUT);
	digitalWrite(RED, HIGH);
	digitalWrite(GREEN, LOW);
	digitalWrite(BLUE, LOW);
}
// Some variables
int redValue;
int greenValue;
int blueValue;

// Making the color change loop into a function cut the file size in half 😎
void changeColor(int pin1, int pin2, int val1, int val2, int wait) {
	for (int i = 0; i < 255; i++) {
		++val1;
		--val2;
		analogWrite(pin1, val1);
		analogWrite(pin2, val2);
		delay(wait);
	}
}
//Main loop
void loop() {
	#define delayTime 10
	redValue = 255;
	greenValue = 0;
	blueValue = 0;
	changeColor(RED, GREEN, redValue, greenValue, delayTime);
	changeColor(GREEN, BLUE, greenValue, blueValue, delayTime);
	changeColor(BLUE, RED, blueValue, redValue, delayTime);

	 }