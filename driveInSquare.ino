// Berfin Bircan - Art of Making Redbot moving in a square 
#include <RedBot.h>  
RedBotMotors motors; // Instantiate the motor control object.

void setup() {
  // Instantiate pin 13 LED as an output.
  pinMode(13, OUTPUT); 
  
  //Pin 12: on-board button
  //Instantiate with internal pull-up resistor 
  pinMode(12, INPUT_PULLUP); //It will be LOW (0) when pressed and HIGH (1) when unpressed
  
//  motors.drive(255);   // Turn on Left and right motors at full speed forward.(going straight)
//  delay(2000);         // Waits for 2 seconds
//  motors.stop();       // Stops both motors
}

void loop() {
  digitalWrite(13, HIGH); // Turns LED ON 
  delay(100);            

  //Read digital signal from the button 
  int buttonPress = digitalRead(12); 

  // 'if' the button pressed
  if (buttonPress == LOW) {
    // drive forward -- without using motors.drive();
    motors.rightMotor(150); // Right motor clockwise 
    motors.leftMotor(-150); // Left motor counter clockwise 
    delay(1500);       
    motors.brake();     // stop
    
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); 
    motors.leftMotor(-100);  
    delay(500);         
    motors.brake();   
    delay(100);         
  
    // drive forward 
    motors.rightMotor(150); // Turn on right motor clockwise 
    motors.leftMotor(-150); // Turn on left motor counter clockwise
    delay(1500);      
    motors.brake();    
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); 
    motors.leftMotor(-100);  
    delay(500);          
    motors.brake();    
    delay(100);          
  
    // drive forward
    motors.rightMotor(150); // Turn on right motor clockwise
    motors.leftMotor(-150); // Turn on left motor counter clockwise
    delay(1500);    
    motors.brake();  
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); 
    motors.leftMotor(-100); 
    delay(500);            
    motors.brake();    
    delay(100);         

    // drive forward
    motors.rightMotor(150); // Turn on right motor clockwise 
    motors.leftMotor(-150); // Turn on left motor counter clockwise 
    delay(1500);       
    motors.brake();     
  }

  digitalWrite(13, LOW);    // Turn LED OFF 
  delay(100);

}
