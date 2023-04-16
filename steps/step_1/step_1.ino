String BT_input;                          // to store input character received via BT.
int LED = 2;                              // device to control

void setup()  
{  
  Serial.begin(9600);                      //default baud rate of module
  pinMode(LED, OUTPUT);
  while (!Serial) 
  {
     // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() 

 { 
  if (Serial.available())
    {   
        BT_input = Serial.readString();   // read input string from bluetooth 
        
        if (BT_input=="A")                
        {
          digitalWrite(LED, HIGH);
          Serial.println(BT_input);
          Serial.println("LED is ON");
        }
        else if (BT_input=="B")
        {
          digitalWrite(LED, LOW);
          Serial.println(BT_input);
          Serial.println("LED is OFF");
        }
        else 
        {
          Serial.println(BT_input);        
          Serial.println("Send 'A' to get LED ON");
          Serial.println("Send 'B' to get LED OFF");
        }
    }
 
}
