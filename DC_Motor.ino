const int switchPin = 2;
const int LEDpin = 5; 
const int motorPin = 9;
int switchState = LOW;
int LEDpinValue = LOW;

void setup() {
 Serial.begin(9600); 
 pinMode(switchPin, INPUT);
 pinMode(motorPin, OUTPUT);
 pinMode(LEDpin, OUTPUT); 
}
void loop(){
 switchState = digitalRead(switchPin);
 //LEDpinValue = digitalRead(LEDpin);
 if (switchState == HIGH) {
  digitalWrite(motorPin, HIGH);
  digitalWrite(LEDpin, HIGH);
 }
 
 else {
  digitalWrite(motorPin, LOW);
  digitalWrite(LEDpin, LOW);
  delay(20);
 }
 Serial.println(LEDpinValue);
}
