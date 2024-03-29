// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

// Connect a stepper motor with 200 steps per revolution (1.8 degree)
// to motor port #2 (M3 and M4)
AF_Stepper motor(200, 2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");
  
  motor.setSpeed(10);  // 10 rpm   
}

void loop() {
  //Serial.println("Single coil steps");
  //motor.step(100, FORWARD, SINGLE); // Spin Up, Moves Down
  motor.step(100, BACKWARD, SINGLE); //Sprin Down, Moves Up

//  Serial.println("Double coil steps");
//  motor.step(100, FORWARD, DOUBLE); 
//  motor.step(100, BACKWARD, DOUBLE);
//
//  Serial.println("Interleave coil steps");
//  motor.step(100, FORWARD, INTERLEAVE); 
//  motor.step(100, BACKWARD, INTERLEAVE); 
//
//  Serial.println("Micrsostep steps");
//  motor.step(100, FORWARD, MICROSTEP); 
//  motor.step(100, BACKWARD, MICROSTEP); 
}
