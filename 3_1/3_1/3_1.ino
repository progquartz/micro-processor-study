int seg[][8] = 
{
{1,1,1,1,1,1,0,0}, // 0
{0,1,1,0,0,0,0,0}, // 1
{1,1,0,1,1,0,1,0}, // 2
{1,1,1,1,0,0,1,0}, // 3
{0,1,1,0,0,1,1,0}, // 4
{1,0,1,1,0,1,1,0}, // 5
{1,0,1,1,1,1,1,0}, // 6
{1,1,1,0,0,0,0,0}, // 7
{1,1,1,1,1,1,1,0}, // 8
{1,1,1,1,0,1,1,0}  // 9
};

int seg_pins[] = {2,3,4,5,6,7,8,9};
int sel_pins[] = {14,15,16,17,18,19};
int a[] = {0,0,0,0};

void setup() {
  int i;
  for(i = 0 ; i < 8 ; i++) pinMode(seg_pins[i] , OUTPUT);
  for(i = 0 ; i <6 ; i++)pinMode(sel_pins[i] , OUTPUT);
  for(i = 0 ; i < 8 ; i++)digitalWrite(seg_pins[i], LOW);
  for(i = 0 ; i < 6 ; i++)digitalWrite(sel_pins[i], HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i, j;
  static int cnt = 0;
  for(i = 0 ; i < 4 ; i++){
    digitalWrite(sel_pins[i],LOW);
    for(j = 0 ; j < 8 ; j++){
      digitalWrite(seg_pins[j], seg[a[i]][j]);
    }
    if(i == 2) digitalWrite(seg_pins[7], 1);
    delayMicroseconds(2500);
    digitalWrite(sel_pins[i], HIGH);
  }
      cnt++;
  

  
    if(a[0] < 9){
      a[0]++;
    }
    else{
      a[0] = 0;
    
    
  }
  if(cnt % 10 == 0){
    if(a[1] < 9){
      a[1]++;
    }
    else{
      a[1] = 0;
    }
  }
  if(cnt % 100 == 0){
    if(a[2] < 9){
      a[2]++;
    }
    else{
      a[2] = 0;
    }
  }
  if(cnt % 1000 == 0){
    if(a[3] < 9){
      a[3]++;
    }
    else{
      a[3] = 0;
    }
  }
}
