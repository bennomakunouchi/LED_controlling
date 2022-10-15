int Counter = 0;

void setup()
{
  pinMode(8, OUTPUT);                     //set LED as output
  pinMode(10, INPUT_PULLUP);              //set button as input
}

void loop()
{
  if(digitalRead(10) == LOW)              //if button press, increase Counter by 1
  {
    Counter++;

    if(Counter % 2 == 1)                  //if Counter odd, turn LED on and wait 2 seconds
  {
    digitalWrite(8, HIGH);
    delay(2000);
  }
  else                                    //if Counter even, turn LED off and wait 2 seconds
  {
    digitalWrite(8, LOW);
    delay(2000);
  }
  
  } 
}
