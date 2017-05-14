/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/


#define I1 12  // Control pin 1 for motor 1
#define I2 13  // Control pin 2 for motor 1
#define I3 7   // Control pin 1 for motor 2
#define I4 8   // Control pin 2 for motor 2

#include <Servo.h>

Servo myservo1;     // create servo object to control a servo
Servo myservo2; 
Servo myservo3;
Servo myservo4;     // twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

int pos1 = 90;

void setup() {
  pinMode(I1,OUTPUT);
  pinMode(I2,OUTPUT);
  pinMode(I3,OUTPUT);
  pinMode(I4,OUTPUT);
  
  myservo1.attach(9);
  myservo2.attach(6); 
  myservo3.attach(5);
  myservo4.attach(10);    // attaches the servo on pin 9,7,5 & 10 to the servo object, (5,10 are opposite to 9,7)
  }

void servoWrite0To180(Servo servoMotor1, Servo servoMotor2){
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servoMotor1.write(pos);
    servoMotor2.write(pos);             // tell servo to go to position in variable 'pos'
    delay(22);                       // waits 15ms for the servo to reach the position
  }
}

void servoWrite180To0(Servo servoMotor1, Servo servoMotor2){
   for (pos = 90; pos >= 0; pos -= 1){ // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servoMotor1.write(pos);
    servoMotor2.write(pos);             // tell servo to go to position in variable 'pos'
    delay(22);                       // waits 15ms for the servo to reach the position
  }
}

void loop() 
{
    digitalWrite(I1,HIGH);   //motor 1
    digitalWrite(I2,LOW);    //motor 1
    digitalWrite(I3,HIGH);   //motor 2
    digitalWrite(I4,LOW);    //motor 2
    delay(1000);

    digitalWrite(I1,LOW);   
    digitalWrite(I2,HIGH);
    digitalWrite(I3,LOW);
    digitalWrite(I4,HIGH);
    delay(1000);
  
  servoWrite0To180(myservo1, myservo2);
  servoWrite180To0(myservo1, myservo2);
  delay(1000);
  
  servoWrite180To0(myservo3, myservo4);
  servoWrite0To180(myservo3, myservo4);
  delay(1000);
}
