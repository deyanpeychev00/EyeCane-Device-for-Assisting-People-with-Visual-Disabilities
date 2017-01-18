#define trigPin 3
#define echoPin 5
#define alarm 7
#define motor 9
void setup()
{ 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); /* Calculating the time of distance measurement [us] */
  distance = (duration/2)*(343/10000); /* Distance calculation [cm] using speed of sound in air = 343 m/s */

  if (distance<=100){  /* Setting sound and vibration indication depending on the measured distance */
    if (distance<20){
      distance=20; 
    }
    digitalWrite(alarm,LOW); // Sound indication
    delay(2);
    digitalWrite(alarm,HIGH);
    delay(distance*3.5);

    digitalWrite(motor, HIGH); // Vibration indication
    delay (50);
    digitalWrite(motor,LOW);
  }
  else{
    delay (500);
    }
}

