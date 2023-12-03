#include "arduino_base64.hpp"

void setup(){
    Serial.begin(115200);
    while(!Serial);

    const char input[] = "F3c7EYKkxMgnvO0nB8FWVw==";
    uint8_t output[data_base64::decodeLength(input)];
    data_base64::decode(input, output);

    Serial.println((const char*)output);
}

void loop(){}