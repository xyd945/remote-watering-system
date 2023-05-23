int sensor_pin = A0; //signal from the capacitive soil moisture sensor
int output_value ;  // value of soil moisture
int pump = 8;      // digital pin where the relay is plugged in

void setup() {
  Serial.begin(9600);
  pinMode(sensor_pin, INPUT);  //setup for the soil moisture senor aka 
INPUt
  pinMode(pump, OUTPUT);      //setup for the pump aka   OUTPUT
  Serial.println("Reading From the Sensor ...");
  delay(1000);  //1 second delay
  }

void loop() {

  output_value = analogRead(sensor_pin);     //gets the value from the 
soil moisture sensor
  output_value = map(output_value,550,0,0,100); // this sets the 
percentage value
  Serial.print("Moisture : ");
  Serial.print(output_value);    //print the percent of soil moisture - 
max is 33% if dipped in a cup of water
  Serial.println("%");
  delay(3000); //wait 3 second

  digitalWrite(pump, LOW);
  Serial.println("pump stopped...");
}
    
