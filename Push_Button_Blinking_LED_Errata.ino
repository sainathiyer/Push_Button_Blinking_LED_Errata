const int LED = 13;//THE PIN FOR LED
const int BUTTON = 7;//the pin where the push button is connected
int val = 0;//val will be used to store the state of the input PIN
int state = 0;//0=LED OFF while 1=Led ON
void setup()
{
  pinMode(LED, OUTPUT);// tell arduino LED is output
  pinMode(BUTTON, INPUT);// tell arduino BUTTON is INPUT
}
void loop()
{
  val = digitalRead(BUTTON);//read input value and store it.
  if (val == HIGH)//check if input is HIGH(button pressed)
  {
    state = 1-state;
  }
  if (state == 1)
  {
    digitalWrite(LED, HIGH);//turn LED ON
  }
  else
  {
    digitalWrite(LED, LOW);
    
  } 
}


