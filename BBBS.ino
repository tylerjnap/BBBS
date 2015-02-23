int ledPin = 9;

int potPin = A5;
int brightness = 0;

int val = 0;
int sensorMin = 0;
int sensorMax = 1023;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  brightness = map(val, sensorMin, sensorMax, 0, 255);
  analogWrite(ledPin, brightness);
  delay(30);
}
