int buzzerPin = 9;

int potPin = A5;
int loudness = 0;

int val = 0;
int sensorMin = 0;
int sensorMax = 1023;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  loudness = map(val, sensorMin, sensorMax, 0, 255); 
  analogWrite(buzzerPin, val);
  delay(30);
}

