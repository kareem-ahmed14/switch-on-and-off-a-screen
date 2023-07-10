// C++ code
//
int led = 12;
int pushButton=11;
int pushButtonStatus;
int ledStatus;
void setup()
{
  pinMode(led, OUTPUT);
   pinMode(pushButton, INPUT);
}

void loop()
{
 pushButtonStatus = digitalRead(pushButton);
  if(pushButtonStatus==1)
  { 
    if(ledStatus==0){
     digitalWrite(led,HIGH);
      ledStatus=1;
      delay(250);
    
  }
  else
  {
   digitalWrite(led,LOW);
   ledStatus=LOW;
    delay(250);
  }
}
}