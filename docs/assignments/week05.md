# 5. E-textiles

This week I did some research on different threads and conductive textiles; options that can possibly be apply to the future of wearables.

## Research
Following is some found research and note taking regarding the most important parts form my own understanding of the subject matter.

I landed on an article- [On "how to work with conductive fabric"](https://www.instructables.com/How-to-Work-With-Conductive-Fabric/) and further depth on the possible applications that this could entitle. It really helped me conceptualize the possibilities, as the concept themselves can become very abstract and the applications hard to grasp.

* Instructible guide to working with conductive fabric, all this new tech can be overwhelming.
* Big  Intresting references inside:
		* (Im Blanky)Vimeo  - dense surface equiped with soft sensors .  Tilt Sensors that use traditional embroidery techniques. when
		* Massage me jacket: a Jacket that make  a backrub massadge a game, turning lights on to indicate the "massagable" area of the back
		* Fabric Drape Sensing controller: uses fabric ability to strech and create tension as tactile msuical interface.
* Lilipad arduino, arduino for the textile industry play arround.

Strech:
* When conductive fabric is attached to knits, materials that need expanding and contracting.
* Knitted thin straight rubbonsd and can be softly bent arround curves,
* Change in current when a fabric is streached
Woven
* Examples: screen mesh, twills, taffeta ext.
* More weight choises,
* Stable in conductivity and electrical properties
* Low resistance, good for power and data

Nonwoven
* Fabric from fiber bonded with chemical, mechanica heat, or solvent treatment, laminated with protective coating
* Low resistance, found in non woven coductive fabric
* High resistance, thker squishier make great force sensing resistors
* Breathable in cases
* Bonding can add strength,
* Dificult to find in small quantities
* Stiff, and dificult to work with

###	Ohms per square
* Conductive fabrics have fibers and conductive metals. The particular resistance depends on variation of the content of metals and fibers. This metric calculates the sheet resitance of the material.
* "If a fabric is labeled as 2 Ω per ▢ it means that when the material is cut in a square, no matter how large or small that square is, it should be 2 Ohms. If cut in another dimension, such as a rectangle, the Ohms per inch are multiplied by the aspect ratio. For example:
* If we define a 1" square an one unit and cut a rectangle that is 1" x 3", the aspect ratio if that rectangle is 3.
	2 Ω (per ▢) x 3 (aspect ratio) = 6 Ohms"
* "Remember that it's uninsulated, so you if you are pumping a good amount of power through an exposed circuit, it can be dangerous"
### Defining the purpose of the conductive fabric
* For traces, look for low resistance
* For contactwitches, look for low resistance
* Capacitive touchswithces look for fairly high resitance, the change in voltage is all that is detected
* Resitors, replace with properly dimentioned material
* Piezoresistive mateirals, change charge when force is applied, as bending or streching  

Conductive Glue/Paint  
"A variety of conductive glues and paints can be bought, such as "wire glue" that contains a silver or carbon compound. You can also make your own by following Instructables and other online tutorials showing you how, usually by using graphite. These mediums open the door to creativity, you can paint, stencil and screen print with some. For connections though, they can be unreliable depending on what they are made of."

###	Data or Power?
It's difficult to find voltage and current ratings for conductive fabrics. Be careful pumping anything more than a few hundred milliamps and 5 volts through. This makes fabric better for data lines rather than running power through.


## Example Guide Projects
Some good examples I contemplate on using as guides are the following  
[Three Fabric Buttons](https://www.instructables.com/Three-Fabric-Buttons/)  
[Neoprene Bend Sensor IMPROVED](https://www.instructables.com/Neoprene-Bend-Sensor-IMPROVED/)  
[Conductive Thread Pressure Sensor](https://www.instructables.com/Conductive-Thread-Pressure-Sensor/)  
[Stroke Sensor](https://www.kobakant.at/DIY/?p=792)  
[Zebra Fabric Stroke Sensors](https://www.kobakant.at/DIY/?p=6163)
[Simple Fabric Pressure Sensors](https://www.kobakant.at/DIY/?p=232)

##Learning outcomes
  * Understand how we can produce soft circuits, sensors and actuators
  * Learn how to embed them in garments, soft objects or wearables
  * Study and learn soft-hard connections
  * Discover necessary materials, components, tools
  * Explore and replicate existing projects

##Assignment
* [ ] Build at least one digital and one analogue soft sensors, using different materials and techniques.
* [ ] Document the sensor project as well as the readings got using the AnalogRead of Arduino
* [ ] Integrate the two soft sensors into one or two textile swatches using hard soft connections
* [ ] Document the circuit and it’s schematic
* [ ] Document your swatches
* [ ] Upload a small video of the swatches functioning
* [ ] EXTRA POINT Integrate the swatch into a project

##Digital Sensor
  Bill of materials  
    - 1 1.5 x 1.5 cm Velostat  
    - 2 1.3 x 1.3 cm Conductive copper Fabric  
    - 1 3x1.5cm Neoprene  (for the cover)
    - 2 Stitch points of conductive thread  
![](../images/db0.jpg)
![](../images/db1.jpg)
![](../images/db2.jpg)
![](../images/db4.jpg)
###Testing Switch
<iframe width="560" height="315" src="https://www.youtube.com/embed/6gbswSNNxvQ" frameborder="0"; clipboard-write; encrypted-media; gyroscope; picture-in-picture"></iframe>  
![](../images/sch1.png)
L1 = led, P1 = Velostat Switch  
In this case I ended using the pin 13 instead of Vcc, when pushed the velostat reduces its resistance and turn on the light.
###Analog Read
The following is a reading of the sensor with the arduino.
The velostat was used in the same format.  

![](../images/2020-10-31-fabriacademy_week5_schemaitcs-04.png)

The following is the code used, grabed from LizaStark.

		int sensorPin = A0;    // select the input pin for the sensor
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
The following was the result:
![](../images/LizaStark_ReadingSensorsValues.JPG)
##Analog Soft Sensor
Bill of materials  
  - 1 1.5 x 1.5 cm 1.5mm EVA   
  - 1 .6 x 2cm cm Conductive copper Fabric  
  - 1 6x2.5cm Neoprene  (for the cover)
  - 2 Stitch points of conductive thread  
![](../images/as0.jpg)
![](../images/as1.jpg)
![](../images/as2.jpg)
![](../images/as3.jpg)
![](../images/as4.jpg)
![](../images/as5.jpg)
  AnalogRead
<iframe width="560" height="315" src="https://www.youtube.com/embed/lbIORI1Yeiw" frameborder="0"; clipboard-write; encrypted-media; gyroscope; picture-in-picture"></iframe>   
<iframe width="560" height="315" src="https://www.youtube.com/embed/pXvOCAwPYNA" frameborder="0"; clipboard-write; encrypted-media; gyroscope; picture-in-picture"></iframe>  
![](../images/.jpg)
##Integrate two soft sensors into one or two swatches with hard or soft connections
##Swatch Documentation
