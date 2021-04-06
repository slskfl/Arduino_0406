const int POT=A0;
const int LED=5;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(POT, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(POT);
  analogWrite(LED, map(val, 0, 1023, 0, 255));
  Serial.println(val);
  delay(500);
}
