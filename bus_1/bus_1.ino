
int in1 = 4;
int in2 = 5;
int val1;
int val2;

void setup() {
  pinMode(in1,INPUT);
  pinMode(in2,INPUT);
  Serial.begin(115200); 
}

void loop() {
  val1 = digitalRead(in1);
  val2 = digitalRead(in2);
  
  Serial.print(val1);
  Serial.println(val2);
  delay(100);

}
