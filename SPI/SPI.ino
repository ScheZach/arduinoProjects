#include <SPI.h>

const int slaveSelectPin = 10;

void setup() {
  pinMode(slaveSelectPin, OUTPUT);
  SPI.begin();
  SPI.setBitOrder(LSBFIRST);

}

void loop() {
  for (int i; i < 256; i++) {
    digitalWrite(slaveSelectPin, LOW);
    SPI.transfer(i);
    digitalWrite(slaveSelectPin, HIGH);
    delay(50);
  }

}
