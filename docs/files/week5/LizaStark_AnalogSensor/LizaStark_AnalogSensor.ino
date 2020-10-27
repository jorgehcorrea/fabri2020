int analog_sensor_pin = A0;
int analog_sensor_value = 0;

void setup() {
  //put your setup code here, to run once:
  pinMode(analog_sensor_pin, INPUT);
  Serial.begin(9600);
}

void loop(){
// put your main code here, to run repeatedly:
analog_sensor_value = analogRead(analog_sensor_pin); //read the voltage of the pin sensor
delay(100);
}
