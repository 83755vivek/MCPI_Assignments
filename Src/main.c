/*1. Blink LEDs in clockwise and anti-clockwise continuously.*/

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "led.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



int main(void)
{
	SystemInit();
	DelayMs(1);
	LedInit(LED_GREEN);
	LedInit(LED_ORANGE);
	LedInit(LED_RED);
	LedInit(LED_BLUE);
	while(1) {
		LedBlink(LED_GREEN, 100);
		LedBlink(LED_ORANGE, 100);
		LedBlink(LED_RED, 100);
		LedBlink(LED_BLUE, 100);

		LedBlink(LED_BLUE, 250);
		LedBlink(LED_RED, 250);
		LedBlink(LED_ORANGE, 250);
		LedBlink(LED_GREEN, 250);
	}
	return 0;
}


