# ![EyeCane Logo](http://i.imgur.com/oUWxyKO.png) 
# EyeCane - Device for Assisting People with Visual Disabilities

The aim of this project is to help people with visual disabilities and facilitate their daily lives.
 
The project consists of a device with software, based on Arduino microcontroller, which measures distance by ultrasonic sensor. 
The signals are assigned to the user via vibrations and sound signals with different frequencies, depending on the measured distance from the device to the object in front of it.

This device can help people with visual disabilities to become more independent by cutting the need of a person to assist their movement in the environment or the need of a guide dog.	

## 01. Project Goals

### The project goals are:
+ Creating a cheap, functional, easy-to-use and accessible to the end-user product.

+ Maintain the compactness and strength of the product.

+ Large range of operation on the device.

+ Simple manufacture, enabling easy making improvements to the product by the user.

+ Long period of operation.

## 02. Major Stages in the Implementation of the Project

+ Define the overall idea of the project.

+ Split the project into separate stages and plan completion deadlines.

+ Learn how Arduino and the other components of the device work.

+ Develop a complete project plan and buy the necessary hardware parts.

+ Create a complete source code that controls the device.

+ Developing test patterns on the device.

+ Making a cane with a suitable shape to which the device is attached.

+ Analyze the positive aspects and drawbacks of the product.

+ Create an end product that works reliably and faultlessly.

+ Documentation and complete end of the project.

## 03. Level of Complexity of the Project - Major Problems in the Realization of the Set Goals
### The Development of the Project Requires:

+ Knowledge in the field of information technology (IT).

+ Skills for working with Arduino microcontrollers.

+ Exploring the needs of visually impaired people.

+ Market research for existing similar solutions to the problem.

### The Main Problems with the Implementation of the Project are:

+ Making a "white cane" to which the device is attached.

+ Powering the device giving it a long period of autonomous operation.

+ Connection of the individual hardware components, keeping the condition of compactness and robustness.

+ Determination of the location of the distance measurement sensors.

## 04. Description of Solution and Implementation
### Design and Implementation of Software
The device software is written in C / C ++, and the environment used to create it is the [Arduino IDE](https://www.arduino.cc/). The entire project source code can be traced to the following address: [Click Here](https://github.com/deyanpeychev00/EyeCane-Device-for-Assisting-People-with-Visual-Disabilities)

### Design and Implementation of Hardware

+ Hardware base - Arduino Microcontroller
At the core of the project is microcontroller Arduino Nano, which is increasingly used in various automation projects. Everyone with the least knowledge of electronics can experiment with it without spending much money as they are both cheap and easy to use.

+ Distance sensor - [HC-SR04](https://www.sparkfun.com/products/13959)
The other major component of the device is the ultrasonic distance measuring sensor. The module is used in projects where remote reading is required, as well as avoidance or detection of objects. Another advantage is its small size, which contributes to the compactness of the finished product.

+ Devices for feedback
User feedback is provided by a vibration motor and an alarm module that synchronously outputs signals by varying their signal transmission frequency according to the measured distance.

+ Powering the device
A portable battery with a capacity of 2600mAh is used to power the device, which is sufficient for optimal operation of the device. The battery is connected to the microcontroller via a USB cable, and when charging it is charged with an USB charger.

### Functional Scheme of the Device

# ![Functional Scheme of the Device](http://i68.tinypic.com/1zl7i3m.png) 

## 05. Pictures of the Device and 'How it Works'
The finished device is extremely easy to use. It is started by switching the CC switch, mounted on the device box itself. A second switch is used to turn the sound module on / off so that the sound does not annoy people around the user when the device is used indoors.

### Pictures of the Finished Device: 

# ![Pictures of the Finished Device](http://i63.tinypic.com/r9pt1l.png) 

When the battery is drained, the cane is disassembled from the handle and the battery is charged via a USB charger as described above.

### How it Works:
The way the device works is described in the following illustration:

# ![How it Works](http://i64.tinypic.com/rayf7b.png)

## 06. Conclusion
The aim of the project is to make a device for helping people with impaired vision.
The goal is achieved using an Arduino microcontroller with specialized software written in the C / C ++ language. Facility signals in front of the device are received by an ultrasonic remote sensor and are supplied to the user via vibration and acoustic indications via a vibration motor and an alarm module.

### Main advantages of the device:
+ Such solutions offered on the market are without optimization and at a costly price, unlike the proposed solution, which is at a price not higher than BGN 50.

+ Functionality gathered in a compact, rugged and easy-to-use device.

+ Open source software that enables user optimization not only at the hardware but also at the software level.

### Future developments
+ Create real-time tracking software.

+ Add an ultrasonic device to expel street dogs.

+ Add a low battery indication.

### Assistive devices used
The programming environment used in the implementation of the project is:

+ [Arduino IDE - C / C ++ (free)](https://www.arduino.cc/).

### The literature used in the implementation of the project is:
+ [https://www.arduino.cc/](https://www.arduino.cc/)

+ [http://tinkbox.ph/sites/mytinkbox.com/files/downloads/US_100_ULTRASONIC_SENSOR_MODULE.pdf](http://tinkbox.ph/sites/mytinkbox.com/files/downloads/US_100_ULTRASONIC_SENSOR_MODULE.pdf)

+ [https://bgarduino.bazar.bg/](https://bgarduino.bazar.bg/)





