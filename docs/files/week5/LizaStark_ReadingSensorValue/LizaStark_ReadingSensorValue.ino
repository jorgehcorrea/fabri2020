int sensorPin = A0;    // select the input pin for the sensor //grab sensor
int ledPin = 9;     // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor


void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); 
 
  analogWrite(ledPin, sensorValue);
  
  //Print the value to the Serial monitor   
  Serial.println(sensorValue);  

}
