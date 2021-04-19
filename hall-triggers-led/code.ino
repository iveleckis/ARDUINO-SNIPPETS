int ledPin = 7;
int hallPin = 0;
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(hallPin, INPUT);
}

void loop() {
  state = digitalRead(hallPin);
  if (state == LOW) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);
  }
}
