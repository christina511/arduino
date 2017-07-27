# include <Servo.h>

Servo servoLeft;
Servo servoRight; 

void setup() {
  servoLeft.attach(12);
  servoRight.attach(13);
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
}

void turn(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1500);
  delay(2000);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(- 1700);
   delay(2000);
}

void back(){
   tone(3,587,100);
   tone(3,440,100);
   delay(200);
    tone(3,440,500);
   servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(19000);
  
}

void side (){
  for(int i=0;i<7; i++){
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  servoLeft.writeMicroseconds(500);
  servoRight.writeMicroseconds(1500);
  delay(500);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(500);
  delay(500);
  }
}

void fb(){
   for(int i=0;i<8; i++){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(500);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(200);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(200);
   }
}

void loop() {
 back();
 turn();
 side();
 fb();
}
