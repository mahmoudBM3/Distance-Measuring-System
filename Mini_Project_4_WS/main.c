
#include"ultrasonic.h"
#include"util/delay.h"
#include "lcd.h"
int main(){
	LCD_init();
	ULTRASONIC_init();
	uint16 distance=0;
	LCD_displayString("Distance= ");
	while(1){
		LCD_moveCursor(0,10);
		distance=ULTRASONIC_readDistance();
		LCD_integerToString(distance);
		LCD_displayString("cm");
	}


}
