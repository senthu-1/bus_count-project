int in1 = 4; //d2
int in2 = 5; //d1

volatile boolean val1 = 0;
volatile boolean val2 = 0;

void setup() {
  pinMode(in1,INPUT);
  attachInterrupt(in1,trigger,RISING);
  Serial.begin(115200);
}

void loop() {
  Serial.println(val1);
  delay(50);
}

void trigger() {
    if(val1){
      val1= 0;  
    }else{
      val1=1;  
    }
}
