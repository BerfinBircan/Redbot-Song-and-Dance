// Berfin Bircan Art of Making Redbot Song and Dance project

// CW  - clock-wise
// CCW - counter clock-wise


#include <RedBot.h>         // Include redbot library
RedBotMotors motors;        // Instantiate the motor control object.
RedBotAccel accelerometer;  // Instantiate accelerometer

void setup() {
  Serial.begin(9600);
  
  //Pin 13 - The RedBot LED
  pinMode(13, OUTPUT);
  
  //Pin 12 - Button
  pinMode(12, INPUT_PULLUP); //It will be LOW (0) when pressed and HIGH (1) when unpressed
  
  //Pin 9 - Buzzer
  pinMode(9, OUTPUT);  // configures the buzzerPin as an OUTPUT
}

void loop() {
  // initiate tone values for twinkle twinkle little star
  int c = 261;
  int d = 293;
  int e = 330;
  int f = 350;
  int g = 392;
  int a = 440;
  int b = 493;

  // Read the digital signal from the button and the accelerometer
  bool bump = false;
  int buttonPress = digitalRead(12); 
  accelerometer.read(); // updates the x, y, and z axis readings on the acceleromter
  if(accelerometer.x > 350 || accelerometer.y < -700 || accelerometer.z > 17300){
    Serial.println(accelerometer.x);
    Serial.println(accelerometer.y);
    Serial.println(accelerometer.z);

    bump = true;
  }
    
    
  if (bump == true || buttonPress == LOW) { // 'if' the button is LOW (pressed)
    //turn on LED when singing
    digitalWrite(13, HIGH); // Turns LED ON -- HIGH on pin 13. 

    // pivot -- spinning both motors CCW causes the RedBot to turn to the right w a motor power of 100
    motors.rightMotor(-100);
    motors.leftMotor(-100);  

    //Play the tones in the correct order
    tone(9, c);   
    delay(300);  
    noTone(9);   

    tone(9, c);   
    delay(300);   
    noTone(9);  

    tone(9, g);  
    delay(300);   
    noTone(9);   

    tone(9, g);  
    delay(300); 
    noTone(9);   

    tone(9, a);   
    delay(300);  
    noTone(9);   

    tone(9, a);  
    delay(300);
    noTone(9);   

    tone(9, g);
    delay(600);
    noTone(9); 

    motors.brake();    // brake motors for the end of the first section of the song




    // pivot -- spinning both motors CCW causes the RedBot to turn to the left w a motor power of 100
    motors.rightMotor(100); 
    motors.leftMotor(100);  

    tone(9, f);   
    delay(300);   
    noTone(9);   

    tone(9, f);   
    delay(300);    
    noTone(9);   

    tone(9, e);  
    delay(300);  
    noTone(9);   

    tone(9, e);  
    delay(300); 
    noTone(9); 

    tone(9, d);  
    delay(300);  
    noTone(9);  

    tone(9, d);   
    delay(300);  
    noTone(9); 

    tone(9, c);   
    delay(610);
    noTone(9);  

    motors.brake();    // brake motors for the end of the second section of the song




    // drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(-150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    
    
    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, f);    
    delay(300);       
    noTone(9);      

    tone(9, f);    
    delay(300);       
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      

    tone(9, d);    
    delay(600);       
    noTone(9);      

    motors.brake();     // brake motors for the end of the third section of the song




// drive forward -- instead of using motors.drive(); Here is another way.
    motors.rightMotor(-150); // Turn on right motor clockwise medium power (motorPower = 150) 
    motors.leftMotor(150); // Turn on left motor counter clockwise medium power (motorPower = 150)
    
    
    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, f);    
    delay(300);       
    noTone(9);      

    tone(9, f);    
    delay(300);       
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      
    
    tone(9, d);    
    delay(600);       
    noTone(9);      

    motors.brake();     // brake motors for the end of the fourth section of the song

//

//
// pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(-100); // Turn CCW at motorPower of 100
    motors.leftMotor(-100);  // Turn CCW at motorPower of 100
    
    
    tone(9, c);    
    delay(300);       
    noTone(9);      

    tone(9, c);    
    delay(300);       
    noTone(9);      

    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, g);    
    delay(300);       
    noTone(9);      

    tone(9, a);    
    delay(300);       
    noTone(9);      

    tone(9, a);    
    delay(300);       
    noTone(9);      

    tone(9, g);    
    delay(600);       
    noTone(9);      

    motors.brake();    // brake motors for the end of the fifth section of the song
//

//
// pivot -- spinning both motors CCW causes the RedBot to turn to the right
    motors.rightMotor(100); // Turn CCW at motorPower of 100
    motors.leftMotor(100);  // Turn CCW at motorPower of 100
   
    
    tone(9, f);    
    delay(300);       
    noTone(9);      

    tone(9, f);    
    delay(300);     
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      

    tone(9, e);    
    delay(300);       
    noTone(9);      

    tone(9, d);    
    delay(300);       
    noTone(9);      

    tone(9, d);    
    delay(300);       
    noTone(9);      

    tone(9, c);    
    delay(600);       
    noTone(9);      

    motors.brake();     // brake motors for the end of the song
    
    digitalWrite(13, LOW);    // Turn LED OFF -- LOW puts 0V on pin 13
  }

  delay(100);

}
