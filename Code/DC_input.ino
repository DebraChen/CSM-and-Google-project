//const int switchPin = A2;
//int switchState = LOW;
//int LEDpinValue = LOW;
//const int DCinputPin = A1;
//int DCinput = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(analogRead(A1));
 delay(100);
}
