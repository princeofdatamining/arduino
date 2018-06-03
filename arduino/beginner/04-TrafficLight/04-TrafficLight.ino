
int carRed = 12,
    carYellow = 11,
    carGreen = 10,
    pedRed = 6,
    pedGreen = 5,
    button = 7,
    crossTime = 5000;

unsigned long lastChanged = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH && millis() - lastChanged > 5000) {
    changeLights();
  }
}

void changeLights() {
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);

  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);

  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);

  delay(crossTime);

  for (int x=0; x<10; x++) {
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }
  digitalWrite(pedRed, HIGH);
  delay(500);

  digitalWrite(carRed, LOW);
  digitalWrite(carYellow, HIGH);
  delay(1000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carGreen, HIGH);

  lastChanged = millis();
}

