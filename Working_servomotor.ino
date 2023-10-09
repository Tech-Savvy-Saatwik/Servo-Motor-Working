#include <Servo.h> 
int servoPin=8;
int servoPos=165;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What angle for the Servo?");
while(Serial.available()==0){

}
servoPos=Serial.parseInt();
myServo.write(servoPos);
}
