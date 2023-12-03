#include <Servo.h> //Install the servo library (Should already be installed, however if not search for a library in manage libraries and add it in)

Servo myservo; //Create servo object 

void setup() {
myservo.attach(A4); //Attach servo to pin A4, it is up to you where you want to attach it, make sure it has power, ground and signal
myservo.write(90); //Primary reset angle, after the Arduino resets, the starting angle is 90 degrees.
}

void loop() {
myservo.write(180); //Contraction angle
delay(500); //Delay for rotation, this can be altered
myservo.write(0); //Release angle (from a hardware perspective, the servo reaches 0, the finger will tilt forward making it seem that it is the primary reset angle
delay(500); //Delay for rotation, this can be altered. 
}
