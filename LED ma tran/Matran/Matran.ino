#define SH_CP_Hang 13
#define DS_Hang 12

#define SH_CP_Cot 4
#define DS_Cot 3

#define ST_CP 11

void setup() {

  pinMode(SH_CP_Cot,OUTPUT);
  pinMode(SH_CP_Hang,OUTPUT);
  pinMode(DS_Cot,OUTPUT);
  pinMode(DS_Hang,OUTPUT);
  pinMode(ST_CP,OUTPUT);

}

void loop() {
  digitalWrite(ST_CP,0);
  shiftOut(DS_Hang,SH_CP_Hang,MSBFIRST,B00000111);
  shiftOut(DS_Cot,SH_CP_Cot,MSBFIRST,B11111000);
  digitalWrite(ST_CP,1);
  

}
