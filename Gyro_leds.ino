#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

const int redLEDs[] = {2, 3, 4};
const int blueLEDs[] = {5, 6, 7};

float angle;

void setup() {

  Serial.begin(9600);
  Wire.begin();

  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 Connection Failed!");
    while (1);
  }

  for (int i = 0; i < 3; i++) {
    pinMode(redLEDs[i], OUTPUT);
    pinMode(blueLEDs[i], OUTPUT);
  }

  allOff();

  Serial.println("Gyroscope LED Flow Started");
}

void loop() {

  int16_t ax, ay, az;

  mpu.getAcceleration(&ax, &ay, &az);

  angle = atan2((float)ay, (float)az) * 180 / PI;

  allOff();

  // Tilt Right
  if (angle > 5 && angle <= 15) {

    digitalWrite(redLEDs[0], HIGH);

  }

  else if (angle > 15 && angle <= 30) {

    digitalWrite(redLEDs[0], HIGH);
    digitalWrite(redLEDs[1], HIGH);

  }

  else if (angle > 30 && angle <= 45) {

    digitalWrite(redLEDs[0], HIGH);
    digitalWrite(redLEDs[1], HIGH);
    digitalWrite(redLEDs[2], HIGH);

  }

  else if (angle > 45 && angle <= 60) {

    digitalWrite(redLEDs[0], HIGH);
    digitalWrite(redLEDs[1], HIGH);
    digitalWrite(redLEDs[2], HIGH);
    digitalWrite(blueLEDs[0], HIGH);

  }

  else if (angle > 60 && angle <= 75) {

    digitalWrite(redLEDs[0], HIGH);
    digitalWrite(redLEDs[1], HIGH);
    digitalWrite(redLEDs[2], HIGH);
    digitalWrite(blueLEDs[0], HIGH);
    digitalWrite(blueLEDs[1], HIGH);

  }

  else if (angle > 75) {

    for (int i = 0; i < 3; i++) {
      digitalWrite(redLEDs[i], HIGH);
      digitalWrite(blueLEDs[i], HIGH);
    }

  }

  // Tilt Left
  else if (angle < -5 && angle >= -15) {

    digitalWrite(blueLEDs[2], HIGH);

  }

  else if (angle < -15 && angle >= -30) {

    digitalWrite(blueLEDs[2], HIGH);
    digitalWrite(blueLEDs[1], HIGH);

  }

  else if (angle < -30 && angle >= -45) {

    digitalWrite(blueLEDs[2], HIGH);
    digitalWrite(blueLEDs[1], HIGH);
    digitalWrite(blueLEDs[0], HIGH);

  }

  else if (angle < -45 && angle >= -60) {

    digitalWrite(blueLEDs[2], HIGH);
    digitalWrite(blueLEDs[1], HIGH);
    digitalWrite(blueLEDs[0], HIGH);
    digitalWrite(redLEDs[2], HIGH);

  }

  else if (angle < -60 && angle >= -75) {

    digitalWrite(blueLEDs[2], HIGH);
    digitalWrite(blueLEDs[1], HIGH);
    digitalWrite(blueLEDs[0], HIGH);
    digitalWrite(redLEDs[2], HIGH);
    digitalWrite(redLEDs[1], HIGH);

  }

  else if (angle < -75) {

    for (int i = 0; i < 3; i++) {
      digitalWrite(redLEDs[i], HIGH);
      digitalWrite(blueLEDs[i], HIGH);
    }

  }

  delay(40);

}

void allOff() {

  for (int i = 0; i < 3; i++) {

    digitalWrite(redLEDs[i], LOW);
    digitalWrite(blueLEDs[i], LOW);

  }

}