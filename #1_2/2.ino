void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  static int i = 2;
  static bool isup = 1;
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  if(isup == 1){
      i++;
    }
    else{
      i--;
      }

  if(i == 9){ 
    isup = 0; 
    }
    if(i == 2){
      isup = 1;
      }
}
