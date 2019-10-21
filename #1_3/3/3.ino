void setup() {
  int pins[] = {2,3,4,5,6,7,8,9};
  // put your setup code here, to run once:
  pinMode(pins, OUTPUT);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // put your main code here, to run repeatedly:
  static int i = 2;
  static bool isup = 1;
  digitalWrite(i,HIGH);
  delay(50);
  digitalWrite(i,LOW);
  if(isup == 1){
      i++;
    }
    else{
      i--;
      }

  if(i == 10){ 
    i = 2; 
  }
  else if(i == 1){
    i = 9;
    }

  if(digitalRead(13) == 1){
    isup = 1;
  }
  if(digitalRead(13) == 0){
    isup = 0;
  }
}
