void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  static int i = 2;
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  i++;
  if(i == 10){
    i = 2;  
    }
}
