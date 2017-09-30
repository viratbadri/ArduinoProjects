void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float val = analogRead(A0);
Serial.println(val);

if (val > 300){
  digitalWrite(2,HIGH);
  delay(5000);
  digitalWrite(2,LOW);
}

}
