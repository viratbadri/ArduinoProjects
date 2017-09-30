int ones_1[] = {8,10};
int zeros_1[] = {2,3,4,5,6,7,9,11};
int ones_2[] = {2,4,5,6,7,8,9,10,11};
int zeros_2[] = {3,8};
int ones_3[] = {2,4,6,7,8,9,10,11};
int zeros_3[] = {3,5};
int ones_4[] = {3,4,8,9,10};
int zeros_4[] = {2,5,6,7,11};
int ones_5[] = {2,3,4,6,7,8,9,11};
int zeros_5[] = {5,10};
int ones_6[] = {2,3,4,5,6,7,8,9,11};
int zeros_6[] = {10};
int ones_7[] = {2,8,10,11};
int zeros_7[] = {3,4,5,6,7,9};
int ones_8[] = {2,3,4,5,6,7,8,9,10,11};
int zeros_8[] = {};
int ones_9[] = {2,3,4,8,9,10,11};
int zeros_9[] = {5,6,7};
int ones_0[] = {2,3,5,6,7,8,10,11};
int zeros_0[] = {4,9};

//void write(int ones[],int zeros[]);
void setup() {
  // put your setup code here, to run once:
int pins[] = {2,3,4,5,6,7,8,9,10,11};
int len = 10;
for ( int i = 0 ; i < len ; i++)
  pinMode(pins[i],OUTPUT);
//Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//  write(eight_ones,eight_zeros);



int len1 = sizeof(ones_1)/sizeof(int);
int len2 = sizeof(zeros_1)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_1[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_1[i],LOW);

}

delay(1000);

len1 = sizeof(onesz_2)/sizeof(int);
len2 = sizeof(zeros_2)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_2[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_2[i],LOW);

}

delay(1000);

len1 = sizeof(ones_3)/sizeof(int);
len2 = sizeof(zeros_3)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_3[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_3[i],LOW);

}

delay(1000);


len1 = sizeof(ones_4)/sizeof(int);
len2 = sizeof(zeros_4)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_4[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_4[i],LOW);

}

delay(1000);


len1 = sizeof(ones_5)/sizeof(int);
len2 = sizeof(zeros_5)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_5[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_5[i],LOW);

}

delay(1000);

len1 = sizeof(ones_6)/sizeof(int);
len2 = sizeof(zeros_6)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_6[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_6[i],LOW);

}

delay(1000);

len1 = sizeof(ones_7)/sizeof(int);
len2 = sizeof(zeros_7)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_7[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_7[i],LOW);

}

delay(1000);

len1 = sizeof(ones_7)/sizeof(int);
len2 = sizeof(zeros_7)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_7[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_7[i],LOW);

}

delay(1000);

len1 = sizeof(ones_8)/sizeof(int);
len2 = sizeof(zeros_8)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_8[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_8[i],LOW);

}

delay(1000);

len1 = sizeof(ones_9)/sizeof(int);
len2 = sizeof(zeros_9)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_9[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_9[i],LOW);

}

delay(1000);

len1 = sizeof(ones_0)/sizeof(int);
len2 = sizeof(zeros_0)/sizeof(int);

for (int i = 0 ; i < len1 ; i++){
  digitalWrite(ones_0[i],HIGH);
  }
for (int i = 0 ; i < len2 ;i++ ){
  digitalWrite(zeros_0[i],LOW);

}

delay(1000);



}
