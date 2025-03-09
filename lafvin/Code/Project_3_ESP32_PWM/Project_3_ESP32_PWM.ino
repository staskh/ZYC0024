// the number of the LED pin
const int ledPin = 4;  // 4 corresponds to GPIO4

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
 
void setup(){
  /* 
  Migration from versions 2.X (based on ESP-IDF 4.4) 
  to version 3.0 (based on ESP-IDF 5.1) of the Arduino ESP32 core
  https://github.com/espressif/arduino-esp32/blob/master/docs/en/migration_guides/2.x_to_3.0.rst

  ledcSetup and ledcAttachPin functions are merged in one single ledcAttach
  */
  // // configure LED PWM functionalitites
  // ledcSetup(ledChannel, freq, resolution);
  
  // // attach the channel to the GPIO to be controlled
  // ledcAttachPin(ledPin, ledChannel);
  ledcAttach(ledPin,freq, resolution);
}
 
void loop(){
  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledPin, dutyCycle);
    delay(15);
  }

  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledPin, dutyCycle);   
    delay(15);
  }
}
