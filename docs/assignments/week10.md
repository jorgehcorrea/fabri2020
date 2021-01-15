# 10. Wearables

November 23rd, 2020

Liza Stark

This second class on the topic of wearables and e-textiles will provide a more advanced coverage on soft sensors and actuators and programming interactions

## Research



## Useful links


[mosfet and transistor dronwbotworkshop] (https://www.youtube.com/watch?v=IG5vw6P9iY4)

(Capítulo 45 - MOSFET IRF520N módulo transistor de potencia (y PWM)) [https://www.youtube.com/watch?v=SliUieh2eVc]
## Tutorial Activities
1. Program Attiny 85
In order to prorgam the Attiny 85, I first required a couple of things:
  *  [Attiny85](https://www.microchip.com/wwwproducts/en/ATtiny85)
  * Arduino Uno
  * 1o uf Capacitor
  * led
  * 220 ohm Resistance

![](../images/ta-w10-1.0.jpg)

1.1 Setup
  In this case I followed the [Tutorial on programming attiny](https://www.instructables.com/Program-an-ATtiny-with-Arduino/) Recomended, as well as look over the tutorial on the fabclass.
![](../images/ta-w10-1.1.JPG)
I also found the following article usefull as a general purpose article to better undersatnd what is going on.  [Arduino as ISP and Arduino Bootloaders] (https://www.arduino.cc/en/Tutorial/BuiltInExamples/ArduinoISP).

1.2 Upload the code
  In this instance I uploaded the blink code to test out.
  * The library of the attiny85 was installed
![](../images/ta-w10-1.3.JPG)
  * The parameters to fit the specifically attiny 85 as follows:
![](../images/ta-w10-1.4.JPG)

  * The programming itself is as follows. The standard Blink example with the led pin changed to '0'.
   ``` python
   // the setup function runs once when you press reset or power the board
   void setup() {
     // initialize digital pin LED_BUILTIN as an output.
     pinMode(0, OUTPUT);
   }

   // the loop function runs over and over again forever
   void loop() {
     digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(1000);                       // wait for a second
     digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
     delay(1000);                       // wait for a second
   }
   ```
   * Referencial Diagram of Pinout of the Attiny 85:
  ![](https://pinouts.net/wp-content/uploads/2020/11/1_otEn80kC9pWxOvNjfJ8F9A.jpeg)

  The end result, for simplicity I decided to use a cr2032 in the breadboard.

  <iframe src="https://vimeo.com/501037891" width="640" height="564" frameborder="0" allow="autoplay; fullscreen" allowfullscreen></iframe>

###Counter Tutorial  

The Follwing is a modification on the Code from the Tutorial. In this case I also attached a speaker, just for kicks.

int sw_pin = 2;
int conutner_reset = 3; //how many times we press before we reset

int led_pin = 0; // pin of the led

//variables will change:
int coutner = 0;
int sw_status = 0;
int last_sw_status = 1;


void setup() {
  // initialize input and output pin:
  pinMode(sw_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);
  //initialise serial communication:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sw_status = digitalRead(sw_pin);

  //compare the switch to its previous state
  if(sw_status != last_sw_status){

    if(sw_status == HIGH){
      coutner = coutner + 1 ;
    }
      delay(500);
  }
 Serial.print("Counter: ");
 Serial.println(coutner);

  last_sw_status = sw_status;

  if (coutner == conutner_reset){
    coutner = 0; // set the counter to zero again
  }

  if(coutner == 0){
    digitalWrite(led_pin, LOW); //led is off
  } else if(coutner == 1){
    digitalWrite(led_pin, HIGH);//led is on
    delay(100);
    digitalWrite(led_pin, LOW); //
    delay(100);
  } else if(coutner == 2){
    digitalWrite(led_pin, HIGH);
    }

  }

###

## Actuator #1

## Actuator #2
