int digit[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};
int digit1, digit2;//các chân enable digit1 và digit2
void setup()
{
  for (int i = 2; i < 9; i++) // setup các chân a,b,c,d,e,f,g
  {
    pinMode(i, OUTPUT);
  }
  pinMode(12, OUTPUT);//chân enable digit 1
  pinMode(13, OUTPUT);//chân enable digit 2
}
void loop() {
  for (int j = 0; j <= 99; j++) // hiện thị số từ 0 đến 99
  {
    digit2 = j / 10;
    digit1 = j % 10;
    for ( int k = 0; k < 20; k++)  
    {
      digitalWrite(12, HIGH);//hiện thị số ở trước
      digitalWrite(13, LOW);
      dis(digit2);
      delay(10);
      digitalWrite(13, HIGH);//hiện thị số ở sau
      digitalWrite(12, LOW);
      dis(digit1);
      delay(10);
    }
  }
}
void dis(int num)
{
  for (int i = 2; i < 9; i++)
  {
    digitalWrite(i, bitRead(digit[num], i - 2)); //bitRead trả về giá trị tại một bit i của một số 
    nguyên tương ứng với các chân a,b,c,d,e,f,g tương ứng vơi i chạy từ 2-9 đổi với arduino
  }
}
