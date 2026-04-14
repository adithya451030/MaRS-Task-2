int x=0;
int IR=13;
void setup() {
  pinMode(IR,INPUT);
  Serial.begin(9600);
}

void loop() {
  int val=digitalRead(IR);

  if(val==0)
  {
    Serial.print("Count");
  Serial.print("Objects = ");
  Serial.println(++x);
  }
  delay(250);
}
