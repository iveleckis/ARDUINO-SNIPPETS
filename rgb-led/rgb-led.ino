int r = 13;
int g = 12;
int b = 11;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  digitalWrite(r, random(2));
  digitalWrite(g, random(2));
  digitalWrite(b, random(2));
  delay(500);
}
