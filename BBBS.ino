int ledPin1 = 7;
int ledPin2 = 8;
int ledPin3 = 9;

int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(delayTime);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(delayTime);

  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(delayTime);
}
