/*
    GPS Test

 
 Codes by:
 e-Gizmo Mechatronix Central
 http://www.e-gizmo.com
 */


void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
}

void loop() // run over and over
{
  if (Serial.available())
    Serial.write(Serial.read());
}

