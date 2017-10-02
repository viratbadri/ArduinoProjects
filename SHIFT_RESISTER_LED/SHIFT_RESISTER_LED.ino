const int  DataPin = 2;
const int ClockPin = 3;
const int LatchPin = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(DataPin,OUTPUT);
  pinMode(ClockPin,OUTPUT);
  pinMode(LatchPin,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,255);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,127);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,63);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,31);
  digitalWrite(LatchPin,HIGH);
  delay(250);
 digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,15);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,7);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,3);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,1);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST,0);
  digitalWrite(LatchPin,HIGH);
  delay(250);


    digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,255);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,127);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,63);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,31);
  digitalWrite(LatchPin,HIGH);
  delay(250);
 digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,15);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,7);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,3);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,1);
  digitalWrite(LatchPin,HIGH);
  delay(250);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,0);
  digitalWrite(LatchPin,HIGH);
  delay(250);
}

