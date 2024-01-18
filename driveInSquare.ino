#include <RedBot.h>  // This line "includes" the library into your sketch.
RedBotMotors motors; // Instantiate the motor control object.

void setup() {
  // The RedBot has an LED connected to pin 13.
  pinMode(13, OUTPUT); //We have to first configure it as an OUTPUT using this command
  
  //Pin 12 is where the on-board button is located
  //We will make pin 12 an input that has an internal pull-up resistor 
  pinMode(12, INPUT_PULLUP); //It will be LOW (0) when pressed and HIGH (1) when unpressed
  
//  motors.drive(255);   // Turn on Left and right motors at full speed forward.(going straight)
//  delay(2000);         // Waits for 2 seconds
//  motors.stop();       // Stops both motors

  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // loop() function repeats over and over... forever!
  
  digitalWrite(13, HIGH); // Turns LED ON -- HIGH puts 5V on pin 13. 
  delay(100);             // delay(500) "pauses" the program for 500 milliseconds

  //We are going to 'read' the digital signal from the button 
  int buttonPress = digitalRead(12); 
  
  if (buttonPress == LOW) { // 'if' the button is LOW (pressed)
    // drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(-150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    delay(1500);       // for 1000 ms.
    motors.brake();     // brake() motors
    
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); // Turn CCW at motorPower of 100
    motors.leftMotor(-100);  // Turn CCW at motorPower of 100
    delay(500);        // for 500 ms.    
    motors.brake();    // brake() motors
    delay(100);        // for 500 ms.    
  
    // drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(-150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    delay(1500);       // for 1000 ms.
    motors.brake();     // brake() motors
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); // Turn CCW at motorPower of 100
    motors.leftMotor(-100);  // Turn CCW at motorPower of 100
    delay(500);        // for 500 ms.    
    motors.brake();    // brake() motors
    delay(100);        // for 500 ms.    
  
    // drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(-150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    delay(1500);       // for 1000 ms.
    motors.brake();     // brake() motors
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); // Turn CCW at motorPower of 100
    motors.leftMotor(-100);  // Turn CCW at motorPower of 100
    delay(500);        // for 500 ms.    
    motors.brake();    // brake() motors
    delay(100);        // for 500 ms.    

    // drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(-150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    delay(1500);       // for 1000 ms.
    motors.brake();     // brake() motors
  }

  digitalWrite(13, LOW);    // Turn LED OFF -- LOW puts 0V on pin 13
  delay(100);

}
