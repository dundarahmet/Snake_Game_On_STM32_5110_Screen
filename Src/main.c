#include "snake_game.h"
#include "core_cm4.h"
/*
 * 1. RST = Reset pin. = PB0
 * 2. CE = chip Enable = PB12
 * 3. D/C = Data/Command. = PB1
 * 4. DIN = Data in = PB15
 * 5. CLK = Clock = PB13
 * 6. VCC = PB5
 * 7. BL = PB7
 * 8. GND
 */

// SPI2 is connected to APB1
// max. sckl speed is 4Mhz.
// AF5 (SPI1/SPI2)
// PB12 SPI2_NSS
// PB13 SPI2_SCK
// PB15 SPI2_MOSI

// buttons pins
// PD0 right
// PD1 left
// PD2 upper
// PD3 lower

int main (void) {

	SystemInit() ;
	LED_Init() ;
	HSE_168MHZ_Init() ;
	systick_init() ;

	SPI2_Init() ;
	LCD_Pin_Init() ;
	Buttons_Init() ;

	while (1) {
		game_start() ;
	}
}
