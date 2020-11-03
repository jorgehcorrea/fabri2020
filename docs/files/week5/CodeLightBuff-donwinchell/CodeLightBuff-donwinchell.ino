
int switch1 = A0; // connect a push button switch between this pin and ground
int ledpin = 9; // internal led, external LED, relay, trigger for other function, some other device, whatever.
boolean flag = true;

void setup()
{
  pinMode(ledpin,OUTPUT); // this pin controlled by flipflop() function
  pinMode (switch1,INPUT_PULLUP); // keeps pin HIGH via internal pullup resistor unless brought LOW with switch
  Serial.begin(9600); // just for debugging, not needed.
}

void loop()
{
  if (digitalRead(switch1)==LOW){ // check the state of switch1 every time we run through the main loop 
  delay(5); // I don't REALLY know why this delay helps, but it does.
      flipflop(); // hops out of main loop and runs the flipflop function
  }// end of check for button press.

  // other sketch code here

} // end of main loop.

void flipflop(){  //funtion flipflop
  flag = !flag;  // since we are here, the switch was pressed So FLIP the boolian "flag" state (we don't even care if switch was released yet)
  Serial.print("flag =   " );   Serial.println(flag);   // not needed, but may help to see what's happening.

  if (flag == LOW){  // Use the value of the flag var to change the state of the pin
    digitalWrite(ledpin,HIGH ); // if the flag var is HIGH turn the pin on
  }
  if (flag == HIGH) {
    digitalWrite(ledpin,LOW); // if the flag var is LOW turn the pin off
  }
  while(digitalRead(switch1)==HIGH); // for "slow" button release, keeps us in the function until button is UN-pressed
  // If you take out this "while" the function becomes a flipflop oscillator if the button is held down.
  delay(50); // OPTIONAL - play with this value.  It is probably short enough to not cause problems. deals with very quick switch press.
}
