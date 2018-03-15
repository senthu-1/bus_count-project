
int v;
int c;
void setup() {
  Serial.begin(115200);
  v = 0;
  c=1;
}

void loop() {
  Serial.println(v^v);
  delay(500);
    Serial.println(v^c);
  delay(500);
    Serial.println(c^v);
  delay(500);
    Serial.println(c^c);
  delay(500);
}
