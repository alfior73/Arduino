#include <Artbotics.h>
Sensor lightSensor(A2);
Motor motorA(3, 12);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
   * Serial.print(lightSensor.getReading());
  Serial.print("\n");
  delay(500);
  */
  if(lightSensor.getReading() < 1)
  {
    motorA.rotate(2, 150, HIGH);
  }
  
}
