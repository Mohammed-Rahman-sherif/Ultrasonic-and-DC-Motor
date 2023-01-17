int trigPin1 = 2;
int trigPin2 = 3;
int echoPin1 = 4;
int echoPin2 = 5;
int led = 7;
int motor1 = 6;
int motor2 = 7;
int motor3 = 8;
int motor4 = 9;

void setup() {
  Serial.begin(9600);
   pinMode(led, OUTPUT);
   pinMode(motor1,OUTPUT);
   pinMode(motor2,OUTPUT);
   pinMode(motor3,OUTPUT);
   pinMode(motor4,OUTPUT);
   pinMode(trigPin1, OUTPUT);
   pinMode(trigPin2, OUTPUT);
   pinMode(echoPin1, INPUT);
   pinMode(echoPin2, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin1,HIGH);
//  digitalWrite(trigPin2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
 // digitalWrite(trigPin2, LOW);
  duration=pulseIn(echoPin1, HIGH);
  //duration=pulseIn(echoPin2, HIGH);
  distance =(duration/1)/29.1;
   duration=pulseIn(echoPin1, LOW);
   //duration=pulseIn(echoPin2, LOW);
  Serial.print(distance);
  Serial.println("cm");
  delay(10);

  if(distance < 50)
  {
    digitalWrite(led, HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor1,LOW);
  }
  

 if(distance > 50)
  {
    digitalWrite(led,LOW);
    digitalWrite(motor1,HIGH);
    digitalWrite(motor1,HIGH);
    digitalWrite(motor1,HIGH);
    digitalWrite(motor1,HIGH);
  }
  }
