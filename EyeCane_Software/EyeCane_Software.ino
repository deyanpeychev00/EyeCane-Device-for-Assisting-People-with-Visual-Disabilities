#define trigPinHorizontal 3
#define echoPinHorizontal 5
#define trigPinVertical 4
#define echoPinVertical 6
#define alarm 7
#define motor 9
void setup()
{ 
  pinMode(trigPinHorizontal, OUTPUT);
  pinMode(echoPinHorizontal, INPUT);
  pinMode(trigPinVertical, OUTPUT);
  pinMode(echoPinVertical, INPUT);
  pinMode(alarm, OUTPUT);
  pinMode(motor, OUTPUT); 

  digitalWrite(alarm, LOW); /* Setting a special sound and vibration indication when the device is turned on */
  digitalWrite(motor, HIGH); 
  delay(100);
  digitalWrite(alarm, HIGH);
  digitalWrite(motor, LOW);
  delay(100);
  digitalWrite(alarm, LOW);
  digitalWrite(motor, HIGH);
  delay(50);
  digitalWrite(alarm, HIGH);
  digitalWrite(motor, LOW);
  delay(150);
  digitalWrite(alarm, LOW);
  digitalWrite(motor, HIGH);
  delay(200);
  digitalWrite(alarm, HIGH);
  digitalWrite(motor, LOW);
  delay(100);
  digitalWrite(alarm, LOW);
  digitalWrite(motor, HIGH);
  delay(200);
  digitalWrite(alarm, HIGH);
  digitalWrite(motor, LOW); /* End of indication */
}
void loop()
{ 
  long durationHorizontal, distanceHorizontal, durationVertical, distanceVertical, finalDistance;

  /* sending signals from horizontal sensor */
  digitalWrite(trigPinHorizontal, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPinHorizontal, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPinHorizontal, LOW);
  durationHorizontal = pulseIn(echoPinHorizontal, HIGH); /* Calculating the time of distance measurement from horizontal sensor [us] */
  distanceHorizontal = (durationHorizontal/2.0)*(343/10000.0); /* Distance calculation [cm] using speed of sound in air = 343 m/s */
 
  /* sending signals from vertical sensor */
  digitalWrite(trigPinVertical, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPinVertical, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPinVertical, LOW);
  durationVertical = pulseIn(echoPinVertical, HIGH); /* Calculating the time of distance measurement from vertical sensor[us] */
  distanceVertical = (durationVertical/2.0)*(343/10000.0); /* Distance calculation [cm] using speed of sound in air = 343 m/s */

  if(distanceVertical < distanceHorizontal){ /* getting the shorter distance measured by horizontal and vertical sensors */
    finalDistance = distanceVertical;
  }
  else{
    finalDistance = distanceHorizontal;
  }

  if (finalDistance<=100){  /* Setting sound and vibration indication depending on the shortest measured distance from both sensors*/
    if (finalDistance<20){
      finalDistance=20; 
    }
    digitalWrite(alarm,LOW); // Sound indication
    delay(2);
    digitalWrite(alarm,HIGH);
    delay(finalDistance*3.5);

    digitalWrite(motor, HIGH); // Vibration indication
    delay (50);
    digitalWrite(motor,LOW);
  }
  else{
    delay (500);
    }
}

