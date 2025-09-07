/*
 * main.h
 *
 *  Created on: Aug 27, 2025
 *      Author: NIKHIL
 */

#ifndef MAIN_H_
#define MAIN_H_



typedef struct {
	uint32_t gpio_a_en: 1;
	uint32_t gpio_b_en: 1;
	uint32_t gpio_c_en: 1;
	uint32_t gpio_d_en: 1;
	uint32_t gpio_e_en: 1;
	uint32_t gpio_f_en: 1;
	uint32_t gpio_g_en: 1;
	uint32_t gpio_h_en: 1;
	uint32_t gpio_i_en: 1;
	uint32_t reserved1: 3;
	uint32_t crc_en:	1;
	uint32_t reserved2: 3;
	uint32_t reserved3: 2;
	uint32_t bkpseram_en: 1;
	uint32_t reserved4: 1;
	uint32_t ccmdataram_en: 1;
	uint32_t dma1_en: 1;
	uint32_t dma2_en: 1;
	uint32_t reserved5: 2;
	uint32_t ethmac_en: 1;
	uint32_t ethmactx_en: 1;
	uint32_t ethmacrx_en: 1;
	uint32_t ethmacptp_en: 1;
	uint32_t otghs_en: 1;
	uint32_t otghsulpie_en: 1;
	uint32_t reserved6: 1;

}RCC_AHB1ENR_t;

typedef struct {
	uint32_t pin_mode_r0 : 2;
	uint32_t pin_mode_r1 : 2;
	uint32_t pin_mode_r2 : 2;
	uint32_t pin_mode_r3 : 2;
	uint32_t pin_mode_r4 : 2;
	uint32_t pin_mode_r5 : 2;
	uint32_t pin_mode_r6 : 2;
	uint32_t pin_mode_r7 : 2;
	uint32_t pin_mode_r8 : 2;
	uint32_t pin_mode_r9 : 2;
	uint32_t pin_mode_r10 : 2;
	uint32_t pin_mode_r11 : 2;
	uint32_t pin_mode_r12 : 2;
	uint32_t pin_mode_r13 : 2;
	uint32_t pin_mode_r14 : 2;
	uint32_t pin_mode_r15 : 2;
}GPIOx_MODE_REG_t;

typedef struct{
	uint32_t odr0 : 1;
	uint32_t odr1 : 1;
	uint32_t odr2 : 1;
	uint32_t odr3 : 1;
	uint32_t odr4 : 1;
	uint32_t odr5 : 1;
	uint32_t odr6 : 1;
	uint32_t odr7 : 1;
	uint32_t odr8 : 1;
	uint32_t odr9 : 1;
	uint32_t odr10 : 1;
	uint32_t odr11 : 1;
	uint32_t odr12 : 1;
	uint32_t odr13 : 1;
	uint32_t odr14 : 1;
	uint32_t odr15 : 1;
	uint32_t reserved : 16;
}GPIOx_ODR_t;

#endif /* MAIN_H_ */
