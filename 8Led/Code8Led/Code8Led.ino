byte led[8] = {2,3,4,5,6,7,8,9};
void setup() 
{
  for (int i=0; i<8; i++)
  {pinMode(led[i], OUTPUT);}
}
void loop() {
  for (int i=0; i<8; i++)
  {digitalWrite(led[i],0);// tắt 8 den led 
  }
  delay(200);
  for (int i=0; i<8;i++)
  {
  digitalWrite(led[i],1); 
  delay(200);
  }
}
