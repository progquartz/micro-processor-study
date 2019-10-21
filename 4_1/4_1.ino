
void setup() {
  // put your setup code here, to run once:
int i;
for(i = 8 ; i < 12 ; i++) pinMode(i,OUTPUT);
for(i = 8 ; i < 12 ; i++)digitalWrite(i,LOW);
}
int i = 0;
void loop() {
    for(i = 0 ; i < 4 ; i++){
      delay(5);
      digitalWrite(8+(i + 1) % 4 , HIGH);
      delay(5);
      digitalWrite(i + 8 , LOW);
    }
}
