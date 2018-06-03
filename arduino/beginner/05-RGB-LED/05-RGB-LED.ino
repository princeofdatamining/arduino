
int R = 5,
    B = 6,
    G = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(R, random(0, 255));
  analogWrite(G, random(0, 255));
  analogWrite(B, random(0, 255));
  delay(500);
}

