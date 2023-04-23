# This file is a step by step documentation of how I did everything

## Step 1: Communicating between the cell phone and the arduino

I used the tutorial from roboindia.com (https://roboindia.com/tutorials/bluetooth-terminal-android/)
to understand how HC-05 works (https://roboindia.com/tutorials/bluetooth-terminal-android/) and used this app as my phone interface to communicate with HC-05 (https://play.google.com/store/apps/details?id=com.frederikhauke.ArduTooth)

So, this was the result: https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_1/step_1.ino

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_1/step_1.png" width="300">

## Step 2: Powering Arduino With a Battery

I used the blink code I found that i found in example/01. Basics/ to see if everything is ok by seeing the led. However, my battery is 6V and the arduino power is 5V, searching the internet i found this https://forum.arduino.cc/t/how-to-reduce-6v-to-5v-dc/1051627 and used a diode to reduce the voltage. You can see the breadboard preview below

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_2/step_2.png" width="300">