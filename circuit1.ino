// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int S1Pin = 2;
int S2Pin = 3;
int S3Pin = 4;
int S4Pin = 5;
int S5Pin = 6;




// Create a 5 servos object 
Servo S1, S2, S3, S4, S5; 
void setup() { 
   // We need to attach the servo to the used pin number 
   S1.attach(S1Pin); 
   S2.attach(S2Pin);
   S3.attach(S3Pin);
   S4.attach(S4Pin);
   S5.attach(S5Pin);


  
}
void loop(){ 
   // Make servo go to 0 degrees 
   S1.write(0); 
   S2.write(0);
   S3.write(0);
   S4.write(0);
   S5.write(0);
   
   delay(1000); 
   // Make servo go to 90 degrees 
   S1.write(90);
   S2.write(90);
   S3.write(90);
   S4.write(90);
   S5.write(90);
   delay(1000); 
   
}
