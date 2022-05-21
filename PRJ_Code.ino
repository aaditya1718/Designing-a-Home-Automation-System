void setup() {
  
  Serial.begin(9600); //Define Baud rate 9600
  pinMode(48, OUTPUT); // Define pin 48 as OUTPUT
  pinMode(49, OUTPUT); // Define pin 49 as OUTPUT
  digitalWrite(48,HIGH);
  digitalWrite(49,HIGH);
 }

void loop() {
  
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      Serial.print("data");
      switch(data)
      {
        case 'Z': digitalWrite(48, HIGH);break; // when Z is pressed on the app Turn on Pin 48
        case 'z': digitalWrite(48, LOW);break; // when z is pressed on the app Turn off Pin 48
        case 'Y': digitalWrite(49, HIGH);break; // when Y is pressed on the app Turn on Pin 49
        case 'y': digitalWrite(49, LOW);break; // when y is pressed on the app Turn off Pin 49
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
