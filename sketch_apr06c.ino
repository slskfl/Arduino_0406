const int pot=A0;
int led_pins[]={7, 5, 4, 2};
int value;
int led_count;
void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  for(int i=0; i<4; i++){
    pinMode(led_pins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(pot); //가변저항 읽기(0~1023)
  Serial.println(value);
  led_count=(value >> 8)+1;
  if(value==0){
    led_count=0;
  }
  for(int i=0; i<4; i++){
    if(i<led_count){
      digitalWrite(led_pins[i], HIGH);
    }else{
      digitalWrite(led_pins[i], LOW);
    }
  }
}
