const int olfPin =45;
const int dispPin = 34;
//9=co2 valve
//8=normal odor valve
//11=co2 balance valve

void setup() {

Serial.begin(9600);
pinMode(olfPin, OUTPUT);


}
void loop() {
  // put your main code here, to run repeatedly:
 
digitalWrite(olfPin, LOW);
delay(5000);
digitalWrite(olfPin, HIGH);
delay(3000);
digitalWrite(olfPin, LOW);
delay(2000);

}
