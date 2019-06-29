
int echo =8;
int trig =7;
int L =6;
int R =7;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode (L,OUTPUT);
pinMode (R,OUTPUT);
pinMode (trig,OUTPUT);
pinMode (echo,INPUT);
digitalWrite (L,LOW);
digitalWrite (R,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
long duration,distance;

//send a trigger
digitalWrite (trig,LOW);
 delayMicroseconds (2);
 digitalWrite  (trig,HIGH);
delayMicroseconds (2);
digitalWrite (trig,LOW);
//wait for the echo
duration = pulseIn(echo,HIGH);
distance = (duration/2)/ 29.1;//intitialize ping as duration

if (distance > 100){//if distance is more than(>)100
digitalWrite (L,HIGH);
digitalWrite (R,HIGH);
}
else {//if distance is less than(<)100
digitalWrite (L,HIGH);
digitalWrite (R,LOW);
delay (1000);
digitalWrite (L,LOW);
digitalWrite (R,LOW);
}
delay (200);
}
/*
if the range is between 100 and 200:
FORWARD
if not:
*LEFTWARD
after delay:
STOP
 */
