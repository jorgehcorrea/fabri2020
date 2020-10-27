int digital_sensor_pin = 8; //chnge the pin, when the sensor is connected?
int digital_sensor_value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(digital_sensor_pin, INPUT); //define the pin as INPUT
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digital_sensor_value = digitalRead(digital_sensor_pin); //read the sensor

  Serial.println(digital_sensor_value);
  delay(100);

}
