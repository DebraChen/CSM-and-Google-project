const int switchPin = 2;
const int LEDpin = 5; 
const int motorPin = 9;
//const int DCinputPin = A1;
int switchState = LOW;
int LEDpinValue = LOW;
//int DCinput; 

void setup() {
 Serial.begin(9600); 
 pinMode(switchPin, INPUT);
 pinMode(motorPin, OUTPUT);
 pinMode(LEDpin, OUTPUT); 
 pinMode(A1,INPUT);
}
void loop(){
 switchState = digitalRead(switchPin);
 //LEDpinValue = digitalRead(LEDpin);
 if (analogRead(A1)>3) {
  digitalWrite(motorPin, HIGH);
  digitalWrite(LEDpin, HIGH);
 }
 
 else {
  digitalWrite(motorPin, LOW);
  digitalWrite(LEDpin, LOW);
  delay(20);
 }
 Serial.println(analogRead(A1));
 delay(20);
}
