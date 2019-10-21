void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  #define Max_Value 255
  #define Min_Value 0
  
  // put your main code here, to run repeatedly:
  static int LightAmount = 0;
  if(digitalRead(13) == 0 && LightAmount < Max_Value){
    LightAmount += 51;
  }
  else if(digitalRead(13) == 1 && LightAmount > Min_Value){
    LightAmount -= 51;
  }
  analogWrite(2,LightAmount);
  delay(100);
}
