const int LED=9;
const int LIGHT=A0;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(LIGHT, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(A0);
  Serial.println(String("조도센서 값=") + value);
  if(value>=900){
    digitalWrite(LED, LOW);
  } else if(value>=300){
    analogWrite(LED, map(value, 0, 1023, 255, 0));
  }else{
    digitalWrite(LED, HIGH);
  }
}
