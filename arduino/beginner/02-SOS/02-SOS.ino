
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  morse(150, 3);
  morse(400, 3);
  morse(150, 3);
  delay(4000);
}

void morse(int interval, int times) {
  for (int i=0; i<times; i++) {
    digitalWrite(led, HIGH);
    delay(interval);
    digitalWrite(led, LOW);
    delay(100);
  }
  delay(1000);
}

