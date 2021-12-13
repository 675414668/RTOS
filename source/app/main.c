#include "hal.h"

#include "task_led.h"
#include "task_lcd.h"
//#include "task_adc.h"
//#include "task_oled.h"
#include "key.h"

int main(void)
{
	hal_init();
	hal_usart_init();
	bsp_key_init();
	hal_timer_init();
  //task_adc_init();
  //task_oled_init();
	task_led_init();
	task_lcd_init();
	
    while(1)
		{
			task_lcd_display();
    }
}


