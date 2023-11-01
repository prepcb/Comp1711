// https://www.arduino.cc/reference/en/libraries/stm32duino-lsm303agr/ <- Add the accelerometer library via the Sketch menu above
// https://sandeepmistry.github.io/arduino-nRF5/package_nRF5_boards_index.json <- Board Manager 
// Ack: Josh Mundray (Yr 1 student)

#include <LSM303AGR_ACC_Sensor.h>

#define DEV_I2C Wire1

LSM303AGR_ACC_Sensor Acc(&DEV_I2C);

void setup() {
  Serial.begin(9600);

  DEV_I2C.begin();

  Acc.begin();
  Acc.Enable();
}

void loop() {
  int32_t accelerometer[3];
  Acc.GetAxes(accelerometer);


  Serial.print("X:");
  Serial.print(accelerometer[0]);
  Serial.print(", Y:");
  Serial.print(accelerometer[1]);
  Serial.print(", Z:");
  Serial.print(accelerometer[2]);

  Serial.print("\n");

  delay(59);
}