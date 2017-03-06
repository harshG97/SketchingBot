#include <Servo.h>
#include <Stepper.h>
Stepper step1(200,4,5,6,7);
Stepper step2(200,8,9,10,11);
//step2 is the stepper with y direction
//step1 is the stepper with x direction
Servo servo1;
char s;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
step1.setSpeed(100);
step2.setSpeed(100);
servo1.attach(3);
servo1.write(30);
}
void loop() {
 // while(Serial.available())
 //{
 if(Serial.available()){
  
  s=Serial.read();
  if(s== 'l')
  {
    //delay(50);
    servo1.write(30);
    //delay(50);
  }
  
  if(s== 'h')
  {
    //delay(50);
    servo1.write(21);
   //delay(90);
  }
  
  if(s=='w')
  {
    step2.step(7);
  }
  
  if(s== 'd')
  {
    step1.step(6);
  }
  
  if(s== 'a')
  {
    step1.step(-894);
  }
 }
}
//}
  
  
  
  
  
  
  
  
  
  
  
  
  
//  // put your main code here, to run repeatedly:
//  while(!Serial.available())
//  {}
//int stepy=Serial.parseInt();
//int stepx=Serial.parseInt();
//
//if(stepx==1)
//{
//  step1.step(5);
//}
//else
//{
//    servo1.write(0);
//  if(stepy!=0)
//  {
//    step2.step(stepy);
//   // step1.step(-var);
//  }
//
//step1.step(stepx);
///*likely to be changed*/
///*likely to be changed*/
//  servo1.write(5);
//}
//}














