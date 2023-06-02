# This file is a step by step documentation of how I did everything

## Step 1: Communicating between the cell phone and the arduino

I used the tutorial from [roboindia.com](https://roboindia.com/tutorials/bluetooth-terminal-android/)
to understand how HC-05 works and used [this app](https://play.google.com/store/apps/details?id=com.frederikhauke.ArduTooth) on my phone to communicate with bluetooth module

So, this was the result: https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_1/step_1.ino

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_1/step_1.png" width="200">

## Step 2: Powering Arduino With a Battery

I used the blink code I found that i found in example/01. Basics/ to see if everything is ok by seeing the led. However, my battery is 6V and the arduino power is 5V, searching the internet i found this https://forum.arduino.cc/t/how-to-reduce-6v-to-5v-dc/1051627 and used a diode to reduce the voltage. You can see the breadboard preview below

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_2/step_2.png" width="300">

## Step 3: Communicating between the motors and arduino using H L298N

I read this tutorial (https://blog.eletrogate.com/guia-definitivo-de-uso-da-ponte-h-l298n/) to understand how H L298N works. So, i used 6v powering scheme and wrote a file (https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_3/step_3.ino) to know if everything is going right 

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_3/step_3.png" width="350">

## Step 4: Using H L298N
Now we want to put everything together. First of all, i found out that powering with just 6V was not enought, so i switched to 2 9v batteries, one for H L298N and other for the others components

The code file is here (https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_4/step_4.ino)

### Protoboard View
<img src="https://github.com/Thiagodcfarias/controle-remoto-arduino/blob/main/steps/step_4/step_4.png" width="400">
