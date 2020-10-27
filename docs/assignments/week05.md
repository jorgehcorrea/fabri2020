# 5. E-textiles

This week I did some research on different threads and conductive textiles; options that can possibly be apply to the future of wearables.

## Research
Following is some found research and note taking regarding the most important parts form my own understanding of the subject matter.

I landed on an article- [On "how to work with conductive fabric"](https://www.instructables.com/How-to-Work-With-Conductive-Fabric/) and further depth on the possible applications that this could entitle. It really helped me conceptualize the possibilities, as the concept themselves can become very abstract and the applications hard to grasp.

	• Instructible guide to working with conductive fabric, all this new tech can be overwhelming.
	• Big  Intresting references inside:
		○ (Im Blanky)Vimeo  - dense surface equiped with soft sensors .  Tilt Sensors that use traditional embroidery techniques. when
		○ Massage me jacket: a Jacket that make  a backrub massadge a game, turning lights on to indicate the "massagable" area of the back
		○ Fabric Drape Sensing controller: uses fabric ability to strech and create tension as tactile msuical interface.
	• Lilipad arduino, arduino for the textile industry play arround.

	Strech:
		• When conductive fabric is attached to knits, materials that need expanding and contracting.
		• Knitted thin straight rubbonsd and can be softly bent arround curves,
		• Change in current when a fabric is streached
	Woven
		• Examples: screen mesh, twills, taffeta ext.
		• More weight choises,
		• Stable in conductivity and electrical properties
		• Low resistance, good for power and data

	Nonwoven
		• Fabric from fiber bonded with chemical, mechanica heat, or solvent treatment, laminated with protective coating
		• Low resistance, found in non woven coductive fabric
		• High resistance, thker squishier make great force sensing resistors
		• Breathable in cases
		• Bonding can add strength,
		• Dificult to find in small quantities
		• Stiff, and dificult to work with

###	Ohms per square
			• Conductive fabrics have fibers and conductive metals. The particular resistance depends on variation of the content of metals and fibers. This metric calculates the sheet resitance of the material.
			• "If a fabric is labeled as 2 Ω per ▢ it means that when the material is cut in a square, no matter how large or small that square is, it should be 2 Ohms. If cut in another dimension, such as a rectangle, the Ohms per inch are multiplied by the aspect ratio. For example:
			If we define a 1" square an one unit and cut a rectangle that is 1" x 3", the aspect ratio if that rectangle is 3.
			2 Ω (per ▢) x 3 (aspect ratio) = 6 Ohms"

			From <https://www.instructables.com/How-to-Work-With-Conductive-Fabric/>
			• "Remember that it's uninsulated, so you if you are pumping a good amount of power through an exposed circuit, it can be dangerous"
### Defining the purpose of the conductive fabric
			• For traces, look for low resistance
			• For contactwitches, look for low resistance
			• Capacitive touchswithces look for fairly high resitance, the change in voltage is all that is detected
			• Resitors, replace with properly dimentioned material
			• Piezoresistive mateirals, change charge when force is applied, as bending or streching
	Conductive Glue/Paint
		"A variety of conductive glues and paints can be bought, such as "wire glue" that contains a silver or carbon compound. You can also make your own by following Instructables and other online tutorials showing you how, usually by using graphite. These mediums open the door to creativity, you can paint, stencil and screen print with some. For connections though, they can be unreliable depending on what they are made of."

###	Data or Power?
		It's difficult to find voltage and current ratings for conductive fabrics. Be careful pumping anything more than a few hundred milliamps and 5 volts through. This makes fabric better for data lines rather than running power through.

		From <https://www.instructables.com/How-to-Work-With-Conductive-Fabric/>
## Example Guide Projects
Some good examples I contemplate on using as guides are the following:
	Three Fabric Buttons
	By Plusea in Circuits

	From <https://www.instructables.com/Three-Fabric-Buttons/>

	Neoprene Bend Sensor IMPROVED
	By Plusea in Circuits

	From <https://www.instructables.com/Neoprene-Bend-Sensor-IMPROVED/>

	Conductive Thread Pressure Sensor
	By Plusea in Circuits

	From <https://www.instructables.com/Conductive-Thread-Pressure-Sensor/>

	Sensors
	Stroke Sensor

	From <https://www.kobakant.at/DIY/?p=792>

	Zebra Fabric Stroke Sensors

	From <https://www.kobakant.at/DIY/?p=6163>
	Simple Fabric Pressure Sensors

From <https://www.kobakant.at/DIY/?p=232>


##Learning outcomes
  * Understand how we can produce soft circuits, sensors and actuators
  * Learn how to embed them in garments, soft objects or wearables
  * Study and learn soft-hard connections
  * Discover necessary materials, components, tools
  * Explore and replicate existing projects

##Assignment
1. Build at least one digital and one analogue soft sensors, using different materials and techniques.
2. Document the sensor project as well as the readings got using the AnalogRead of Arduino
3. Integrate the two soft sensors into one or two textile swatches using hard soft connections
4. Document the circuit and it’s schematic
5. Document your swatches
6. Upload a small video of the swatches functioning
7. EXTRA POINT Integrate the swatch into a project

##Digital Sensor
  Bill of materials  
    - 1 1.5 x 1.5 cm Velostat  
    - 2 1.3 x 1.3 cm Conductive copper Fabric  
    - 1 3x1.5cm Neoprene  (for the cover)
    - 2 Stitch points of conductive thread  
![](../images/db0.jpg)
![](../images/db1.jpg)
![](../images/db2.jpg)
![](../images/db4.jpg)//change when final is up
  DigitalRead
<iframe width="560" height="315" src="https://www.youtube.com/embed/6gbswSNNxvQ" frameborder="0"; clipboard-write; encrypted-media; gyroscope; picture-in-picture"></iframe>  
  Schematic
![](../images/sh.jpg)//schematic
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
![](../images/as5.jpg)//change when final is up
  AnalogRead
<iframe width="560" height="315" src="https://www.youtube.com/embed/lbIORI1Yeiw" frameborder="0"; clipboard-write; encrypted-media; gyroscope; picture-in-picture"></iframe>  
  Schematic
##Integrate two soft sensors into one or two swatches with hard or soft connections
##Swatch Documentation
