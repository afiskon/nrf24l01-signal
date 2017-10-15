#include <Arduino.h>
#include "nRF24L01.h"
#include "RF24.h"

RF24 radio(9, 10);

void setup(void)
{
  radio.begin();
  radio.setChannel(108);
  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_250KBPS);
  radio.openWritingPipe(0xA1B2C3D4E5);
}

void loop(void)
{
  uint8_t state[] = { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
                      0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF };
  delay(100);
  radio.write( &state, sizeof(state) );
}
