#include "arduino_base64.hpp"

void setup(){
    Serial.begin(115200);
    while(!Serial);

    const uint8_t input[] = {0x17, 0x77, 0x3B, 0x11, 0x82, 0xA4, 0xC4, 0xC8};
    auto inputLength = sizeof(input);
    char output[data_base64::encodeLength(inputLength)];
    data_base64::encode(input, inputLength, output);

    Serial.println(output);
}

void loop(){}