# wifi-rc-car
A project using NodeMCU motor shield to convert a RC car to have WiFi controls

Replace **SSID** and **Password** in file MotorWeb.ino



For the insides of the car we need the following:

    NodeMCU ESP8266 Development board* - If you aren't familiar with the ESP8266, it's an Arduino compatible board that has built in WiFi, I love it! There are several types of NodeMCU boards, the two common ones are in the 3rd picture make sure you get the right one! (the smaller one). 

    NodeMCU Motor Shield* - This is a really nice board that has a L293D motor driver chip on it that the NodeMCU just slots into. There are screw terminals for connecting to the motors and there is a button to turn it on and off 

Non-Wired Remote RC Car:

Non wired remote cars will have two motors the same as the wired ones, but the wires attached to them are probably too short to be useful. You may need to solder new longer wire to the two terminals of each motor.You can also try remove as much of the circuitry other than the motors as possible.

![image](https://github.com/thyph3r/wifi-rc-car/assets/138519092/e1150e76-f7cb-4b5c-8355-cf35107007bd)

Assembling the Circuit:

Slot the NodeMCU board into the motor shield, note the direction though. There is a antenna drawn on the motor shield, ensure the the NodeMCU's antenna (the gold lines) are lining up with marking. If inserted correctly the micro USB slot should be beside the screw terminals

Next we need to attach the little jumper block. There is jumper pins between the power button and the screw terminals, you need to connect the two pins labeled VIN and VM. See the second photo for more details.

![image](https://github.com/thyph3r/wifi-rc-car/assets/138519092/e92eac02-65c8-4776-a5f9-7a4b37400182)

Now we want to connect up the battery case. Take the red wire from the battery holder and connect it to the VIN screw terminal. (The reason we use the VIN terminal is because the power button switches this on and off). Connect the black wire to either of the GND terminals.

If you load batteries into the battery holder and make sure everything is switched on, you show now see some LEDS on the NodeMCU and Motor Shield.

Attaching the Motors:

Put the motor shield on the side of the battery back that slides open. I recommend attaching it with blu-tac or some other non permanent way of getting it to stay put. Then attach the battery pack onto the car using blu-tac again. (When you are happy with the car you could use hot glue to hold everything down.)

Next we want to connect the motors to the motor shield. Connect the wires from the steering motor to the screw terminals marked A+ and A-, It doesn't matter which wire goes to the + or the - for the moment (we will come back to this). The drive motor is obviously then connected to the B+ and B- terminals.

If you are finding it hard to push the wire into the terminal, try inserting the screw driver head into where the wire will go, there is a metal piece that can sometimes can be a bit stuck down. (See the 5th picture for more details)

Programming the Board:

First you want to turn off the power to the board from the batteries (press the button on the motor shield, the lights should be off). You then want to plug your micro USB cable into the NodeMCU board as shown in the picture.You then want to download the code for this project. Now open the Arduino IDE, then click File -> Open, navigate to where you just extracted the zip from above and open the MotorWeb.ino file. You will only need to make one change to this file, and that is to update the SSID and Password for your Wifi. When you have made that change upload it to your board.

We are almost ready to test this thing out! For the moment leave the Micro USB cable plugged in.In the Arduino IDE open the serial monitor (if you are not sure how I have marked it in the first photo). Set the Baud rate to 115200. Press the reset button on NodeMCU board, after it connects to the WiFi you should see the IP address of the device displayed on screen.

Either on your phone or a computer, open up a web browser and type the IP address into the address bar. You should see a web page similar to the one in my second picture.We now need to check are the motors wired the right way. First press the Drive and Back buttons, did the car drive correctly? If not you can either swap the wiring around or you can easily fix it in software, search for drive_direction and switch it from HIGH change it so it is set LOW.

The same thing applies to the steering, except you are swapping around the steer_directions variable

Once your are happy with how its working, plug out the micro USB cable and press the white button on the motor shield. Leave it a few seconds and try connect to the same IP address as before.
