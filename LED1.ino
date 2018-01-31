int pin=2;
int trigger=10;
int echo=8;
int distance;
long tim;
/*int pin2=4;
int pin3=6;
int i=0;*/
void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin,OUTPUT);
pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);

}

void loop() 
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
tim=pulseIn(echo,HIGH);
distance=(0.039*tim)/2;
Serial.print(" distance= ");
Serial.println( distance );
delay(1000);
if(distance<=10)
{
  digitalWrite(pin,HIGH);
  delay(1000);
}
}



