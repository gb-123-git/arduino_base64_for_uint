#include "mod.arduino_base64.hpp"

void setup(){
    Serial.begin(115200);
    while(!Serial);

    const char data[] = "F3c7EYKkxMgnvO0nB8FWVw==";
    uint8_t result[BASE64::decodeLength(data)];

    BASE64::decode(data, result);

    Serial.println((const char*)result);
}

void loop(){}