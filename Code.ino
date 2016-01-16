//Traffic-Light
//Arduino Code for Traffic Light
int green=13;
int yellow=9;
int red=8;
int brightness=0;
int fade=5;
void fad(int x) {
  for(int k=0;k<5;)
  {analogWrite(x,brightness);
brightness=brightness+fade;
if(brightness==0||brightness==255)
fade=-fade;
if(brightness==0)
k++;
delay(30);}
analogWrite(x,0);
  }
void blink(int a,int t) {
digitalWrite(a,HIGH);
delay(t);
digitalWrite(a,LOW);
  }
void setup() {
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  blink(red,7000);
  fad(yellow);
  blink(green,7000);
}
