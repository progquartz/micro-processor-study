int row_pin[] = {22,23,24,25,26,27,28,29};
int col_pin[] = {32,33,34,35,36,37,38,39};
int led[][8] = 
{
{1,1,1,1,1,1,1,1},  
{1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1},
{1,1,1,0,0,1,1,1},
{1,1,0,0,0,0,1,1},
{1,0,0,1,1,0,0,1},
{0,0,1,1,1,1,0,0},
{0,1,1,1,1,1,1,0},
};

void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0 ; i < 8 ; i++)pinMode(row_pin[i],OUTPUT);
  for(i = 0 ; i < 8 ; i++)pinMode(col_pin[i],OUTPUT);
  for(i = 0 ; i < 8 ; i++)digitalWrite(row_pin[i], LOW);
  for(i = 0 ; i < 8 ; i++)digitalWrite(col_pin[i], HIGH);
}



void loop() {
  // put your main code here, to run repeatedly:
  static int timecnt = 0;
  static int cnt = 1000;
  for(int i = 0 ; i < 8 ; i++){
    digitalWrite(row_pin[(i + cnt)%8], HIGH);
    for(int j = 0 ; j < 8 ; j++){
        digitalWrite(col_pin[j], led[i][j]);
    }
    delay(1);
    digitalWrite(row_pin[(i + cnt)%8], LOW);
  }
  timecnt++;
  
  if(timecnt % 25 == 0){
    cnt--;
    }
}
