#include <Artbotics.h>
Motor motorA(3, 12);
Motor motorB(11, 13);

void setup() {
  // put your setup code here, to run once:
  

}

void loop() {
  // put your main code here, to run repeatedly:
  motorA.rotate(3, HIGH);
  motorB.rotate(3, LOW);
  delay(3000);
  motorA.stop();
  motorB.stop();
  delay(3000);
}
