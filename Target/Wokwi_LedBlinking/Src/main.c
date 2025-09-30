/*
 *
 * 	Board used => NUCLEO C031C6
 * 	WOKWI LINK:	https://wokwi.com/projects/443509156432457729
 *	PA5 -> connected to internal LD4(led builtin) and
 *	also same pin is connected to D13 pin so if we connect external led then it also(both internal and external LED) glows
 *
 *
 */
// LD4 -> PA5

// ofset address
#define GPIOA_MODER_OFFSET 		0x00 // MODEREG 10,11 >> 0x400
#define RCC_IOPENR_OFFSET		0x34 // set bit 0 -> 1
#define GPIOx_ODR_OFFSET		0x14


#define GPIO_BASE_ADD			0x50000000		// GPIO base address
#define RCC_BASE_ADDRESS		0x40021000		// RCC base address (clock)

#define RCC_IOENABLE			(*(volatile uint32_t *)(RCC_BASE_ADDRESS + RCC_IOPENR_OFFSET))
#define GPIOA_MODE				(*(volatile uint32_t*)(GPIO_BASE_ADD + 0x00))
#define GPIOA_ODR				(*(volatile uint32_t*)(GPIO_BASE_ADD + GPIOx_ODR_OFFSET))


#include <stdint.h>

int main(void)
{

	RCC_IOENABLE |= 0x01;

	GPIOA_MODE &= 0xFFFFF3FF;
	GPIOA_MODE |= 0x01 << 10;

	for(;;){
		GPIOA_ODR |= 0x1 << 5;
        for (volatile int i = 0; i < 300000; i++);

    	GPIOA_ODR &= ~(0x1 << 5);
        for (volatile int i = 0; i < 300000; i++);

	}
}
