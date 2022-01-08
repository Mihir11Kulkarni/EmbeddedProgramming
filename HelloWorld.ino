#include <Arduino.h>
#include <U8g2lib.h>
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
void setup(void) {
  u8g2.begin();
}
void loop(void) {
  u8g2.clearBuffer();					// clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);	// choose a suitable font
  for(int i=0;i<100;i++)
  {
    u8g2.drawStr(i,40,"__Mihir11__"); 
    u8g2.sendBuffer();  
    u8g2.clearBuffer();  
     
  }
}
