## Introduction
This repo contains files required to communicate with Pixhawk running px4 using an Arduino with the help of mavlink. 
The task is to create a custom message which can hold a four floats and send it via serial ports to the pixhawk which then decodes it.

### Arduino
The mavlink folder in the repo need to be placed inside the libraries in the Arduino. This enables the Arduino board to use the mavlink functionalities.

A specific mavlink header file for sending the four floats is created using the python script mavgenerate.py by making changes in the common.xml file. The mavlink header file is named  *mavlink_msg_four_floats.h* .

The four_floats foleder contains the Arduino code which uses the *mavlink_msg_four_floats* to send the four floats to px4.


