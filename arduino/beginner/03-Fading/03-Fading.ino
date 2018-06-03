
int led = 9,
    interval = 1000,
    increament = 5,
    value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, value);
  value += increament;
  if (value >= 250) {
    increament = -5;
  }
  else if (value <= 0) {
    increament = 5;
  }
  delay(interval * abs(increament) / 250);
}
