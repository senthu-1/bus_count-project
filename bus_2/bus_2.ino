int pinA = 5;//d1
int pinB = 10;//sd3

volatile int rawA = 0;//raw value chaged by ISA
volatile int rawB = 0;
int A=0;
int B=0;
int count; //count of the people

void setup() {
  pinMode(pinA,INPUT);
  pinMode(pinB,INPUT);
  attachInterrupt(pinA,triggerA,CHANGE);
  attachInterrupt(pinB,triggerB,CHANGE);
  Serial.begin(115200);
}

void loop() {
  if((rawA==0)&&(rawB==0)){
    A = 0;
    B = 0;  
  }else if((rawA==1)&&(rawB==0)){
      count = count - ((1^A)&(0^B));
      A = rawA;
      B = rawB;
  }else if((rawA==0)&&(rawB==1)){
      count = count + ((0^A)&(1^B));
      A = rawA;
      B = rawB;
  }
  Serial.println(count);
  delay(100);
}


//ISA
void triggerA(){
  rawA = digitalRead(pinA);
}

void triggerB(){
  rawB = digitalRead(pinB);
}
