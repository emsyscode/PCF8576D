/*
Two I2C-bus slave addresses (01110000 and 01110010)
are reserved for the PCF8576D. The least significant bit of
the slave address that a PCF8576D will respond to is
defined by the level tied to its SA0 input. The PCF8576D
is a write-only device and will not respond to a read
access
*/
#include <Wire.h>
#define blue 8
byte val = 0;
void wheel_1(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00000100));
  Wire.write(byte(0b00000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_2(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b10000000));
  Wire.write(byte(0b00000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_3(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b10000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_4(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b01000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_5(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000100));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_6(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00001000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_7(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00001000));
  Wire.write(byte(0b00000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void wheel_8(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b01000000));
  Wire.write(byte(0b00000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void clearLCD(){
     //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  for(uint8_t b=0; b<20; b++){
    Wire.write(byte(0b00000000)); 
  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void Blaupunkt(){
  //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00001100));//(T)
  Wire.write(byte(0b10000000));
  
  Wire.write(byte(0b01000001));//(K)
  Wire.write(byte(0b10001110));
  
  Wire.write(byte(0b10100001));//(N)
  Wire.write(byte(0b11000110));

  Wire.write(byte(0b10100000));//(U)
  Wire.write(byte(0b00010110));

  Wire.write(byte(0b10000110));//(P)
  Wire.write(byte(0b00001110));

  Wire.write(byte(0b10100000));//(U)
  Wire.write(byte(0b00010110));

  Wire.write(byte(0b10100110));//(A)
  Wire.write(byte(0b00001110));

  Wire.write(byte(0b00000000));//(L)
  Wire.write(byte(0b00010110));
  
  Wire.write(byte(0b01000101));//(B)
  Wire.write(byte(0b10011110));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
//  for(uint8_t b=0; b<40; b++){
//    Wire.write(byte(0b11111111)); 
//  }
//  val++;        // increment value
//  if(val == 20) // if reached 30th position (max)
//  {
//    val = 0;    // start over from lowest value
//  }
   
  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void HiFolks(){
   //The table is 4rows by 40 columns
  Wire.beginTransmission(0x38);   // transmit to device 0B01110000
                                  // device address is specified in datasheet
  Wire.write(byte(0b11001100));   //Mode Set, sends instruction byte to define static or 1:2~1:4, M1,M0
  Wire.write(byte(0b10000000));   //Load data pointer Last 6 bits: P5,P4,P3,P2,P1,P0
  Wire.write(byte(0b11100000));   //Table 9 Device Select, Last 3 bits: A2,A1,A0
  Wire.write(byte(0b11111000));   //Bank Select
  Wire.write(byte(0b01110000));   //BLINK, Last 3 bits A, BF1, BF0

  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00100110));//(S)
  Wire.write(byte(0b10011100));
  
  Wire.write(byte(0b01000001));//(K)
  Wire.write(byte(0b10001110));
  
  Wire.write(byte(0b00000000));//(L)
  Wire.write(byte(0b00010110));
  
  Wire.write(byte(0b10100100));//(O)
  Wire.write(byte(0b00010110));
   
  Wire.write(byte(0b00000110));//(F)
  Wire.write(byte(0b00001110));
  
  Wire.write(byte(0b00000000));//(space)
  Wire.write(byte(0b00000000));
  
  Wire.write(byte(0b00001100));//(I)
  Wire.write(byte(0b10010000));
  
  Wire.write(byte(0b10100010));//(H)
  Wire.write(byte(0b10001110));
  
  Wire.write(byte(0b00000000));
  Wire.write(byte(0b00000000));

  //Wire.write(val);              // sends potentiometer value byte  
  Wire.endTransmission();         // stop transmitting
}
void setup()
{
  pinMode(blue, OUTPUT);
  digitalWrite(blue, LOW);
  Wire.begin(0x38); // join i2c bus (address optional for master)
}
void loop()
{
  wheel_1();
  delay(200);
  wheel_2();
  delay(200);
  wheel_3();
  delay(200);
  wheel_4();
  delay(200);
  wheel_5();
  delay(200);
  wheel_6();
  delay(200);
  wheel_7();
  delay(200);
//  wheel_8();
//  delay(200);
  for(uint8_t s = 0; s< 4; s++){
    HiFolks();
    delay(1500);
    clearLCD();
    delay(1500);
  }
  digitalWrite(blue, HIGH);
  Blaupunkt();
  delay(2000);
  digitalWrite(blue, LOW);
}
