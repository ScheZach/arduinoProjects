int led = 8;
int inputPin = 7;
int pirState = LOW;
int val = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inputPin);
  if (val == HIGH) {
    digitalWrite(led, HIGH);
    if (pirState == LOW) {
      pirState = HIGH;
    }
  } else {
    digitalWrite(led, LOW);
    if (pirState == HIGH) {
      pirState = LOW;
    }
  }

}
