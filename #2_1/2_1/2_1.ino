void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static bool isup = 1;
  static int grade = 0;
  static int LightAmount = 0;
  if(digitalRead(13) == 0 && grade < 5){
    LightAmount += 2;
    grade++;
    Serial.print(LightAmount);
  }
  else if(digitalRead(13) == 1 && grade > 0){
    LightAmount -= 2;
    grade--;
    Serial.print(LightAmount);
  }
  for(int i = 0 ; i < 10 ; i++){
      digitalWrite(2,HIGH);
    delay(LightAmount);
    digitalWrite(2,LOW);
     delay(10 - LightAmount);
  }

}
