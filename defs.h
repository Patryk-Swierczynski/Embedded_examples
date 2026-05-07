#ifndef DEFS_H
#define DEFS_H
#include <stdint.h>

#define GPIOA_START 0x48000000 // nie dotykać pinów 13 i 14 w porcie A!!! brak komunikacji z debugerem
#define GPIOB_START 0x48000400
#define GPIOC_START 0x48000800
#define GPIOD_START 0x48000C00
#define GPIOE_START 0x48001000
#define GPIOF_START 0x48001400
#define GPIOG_START 0x48001800
#define GPIOH_START 0x48001C00
#define GPIOI_START 0x48002000

typedef enum {
	MODE_INPUT = 0U,
	MODE_GP,
	MODE_AF,
	MODE_ANALOG
} GPIO_MODE_SELECTION_t;

typedef struct {
	volatile uint32_t MODE0 : 2;
	volatile uint32_t MODE1 : 2;
	volatile uint32_t MODE2 : 2;
	volatile uint32_t MODE3 : 2;
	volatile uint32_t MODE4 : 2;
	volatile uint32_t MODE5 : 2;
	volatile uint32_t MODE6 : 2;
	volatile uint32_t MODE7 : 2;
	volatile uint32_t MODE8 : 2;
	volatile uint32_t MODE9 : 2;
	volatile uint32_t MODE10 : 2;
	volatile uint32_t MODE11 : 2;
	volatile uint32_t MODE12 : 2;
	volatile uint32_t MODE13 : 2;
	volatile uint32_t MODE14 : 2;
	volatile uint32_t MODE15 : 2;
} GPIOx_MODER_t;

typedef enum {
	OTYPE_PUSH_PULL = 0U,
	OTYPE_OPEN_DRAIN
} GPIO_OTYPE_SELECTION_t;

typedef struct {
	volatile uint16_t OT0 :1;
	volatile uint16_t OT1 :1;
	volatile uint16_t OT2 :1;
	volatile uint16_t OT3 :1;
	volatile uint16_t OT4 :1;
	volatile uint16_t OT5 :1;
	volatile uint16_t OT6 :1;
	volatile uint16_t OT7 :1;
	volatile uint16_t OT8 :1;
	volatile uint16_t OT9 :1;
	volatile uint16_t OT10 :1;
	volatile uint16_t OT11 :1;
	volatile uint16_t OT12 :1;
	volatile uint16_t OT13 :1;
	volatile uint16_t OT14 :1;
	volatile uint16_t OT15 :1;
	volatile uint8_t Reserved[2];
} GPIOx_OTYPER_t;

typedef enum {
	OSPEED_LOW = 0U,
	OSPEED_MEDIUM,
	OSPEED_HIGH,
	OSPEED_VERY_HIGH
} GPIO_OSPEED_SELECTION_t;

typedef struct {
	volatile uint32_t OSPEED0 : 2;
	volatile uint32_t OSPEED1 : 2;
	volatile uint32_t OSPEED2 : 2;
	volatile uint32_t OSPEED3 : 2;
	volatile uint32_t OSPEED4 : 2;
	volatile uint32_t OSPEED5 : 2;
	volatile uint32_t OSPEED6 : 2;
	volatile uint32_t OSPEED7 : 2;
	volatile uint32_t OSPEED8 : 2;
	volatile uint32_t OSPEED9 : 2;
	volatile uint32_t OSPEED10 : 2;
	volatile uint32_t OSPEED11 : 2;
	volatile uint32_t OSPEED12 : 2;
	volatile uint32_t OSPEED13 : 2;
	volatile uint32_t OSPEED14 : 2;
	volatile uint32_t OSPEED15 : 2;
} GPIOx_OSPEEDR_t ;

typedef enum {
	PUPD_NO_PULLING = 0U,
	PUPD_PULL_UP,
	PUPD_PULL_DOWN,
	RESERVED //do not use!
} GPIO_PUPD_SELECTION_t;

typedef struct {
	volatile uint8_t PUPD0 : 2;
	volatile uint8_t PUPD1 : 2;
	volatile uint8_t PUPD2 : 2;
	volatile uint8_t PUPD3 : 2;
	volatile uint8_t PUPD4 : 2;
	volatile uint8_t PUPD5 : 2;
	volatile uint8_t PUPD6 : 2;
	volatile uint8_t PUPD7 : 2;
	volatile uint8_t PUPD8 : 2;
	volatile uint8_t PUPD9 : 2;
	volatile uint8_t PUPD10 : 2;
	volatile uint8_t PUPD11 : 2;
	volatile uint8_t PUPD12 : 2;
	volatile uint8_t PUPD13 : 2;
	volatile uint8_t PUPD14 : 2;
	volatile uint8_t PUPD15 : 2;
} GPIOx_PUPDR_t;

typedef struct {
	volatile uint8_t ID0 :1;
	volatile uint8_t ID1 :1;
	volatile uint8_t ID2 :1;
	volatile uint8_t ID3 :1;
	volatile uint8_t ID4 :1;
	volatile uint8_t ID5 :1;
	volatile uint8_t ID6 :1;
	volatile uint8_t ID7 :1;
	volatile uint8_t ID8 :1;
	volatile uint8_t ID9 :1;
	volatile uint8_t ID10 :1;
	volatile uint8_t ID11 :1;
	volatile uint8_t ID12 :1;
	volatile uint8_t ID13 :1;
	volatile uint8_t ID14 :1;
	volatile uint8_t ID15 :1;
	volatile uint8_t Reserved[2];
} GPIOx_IDR_t;
typedef struct {
	volatile uint8_t OD0 :1;
	volatile uint8_t OD1 :1;
	volatile uint8_t OD2 :1;
	volatile uint8_t OD3 :1;
	volatile uint8_t OD4 :1;
	volatile uint8_t OD5 :1;
	volatile uint8_t OD6 :1;
	volatile uint8_t OD7 :1;
	volatile uint8_t OD8 :1;
	volatile uint8_t OD9 :1;
	volatile uint8_t OD10 :1;
	volatile uint8_t OD11 :1;
	volatile uint8_t OD12 :1;
	volatile uint8_t OD13 :1;
	volatile uint8_t OD14 :1;
	volatile uint8_t OD15 :1;
	volatile uint8_t Reserved[2];
} GPIOx_ODR_t;

typedef struct {
	volatile uint8_t BS0 :1;
	volatile uint8_t BS1 :1;
	volatile uint8_t BS2 :1;
	volatile uint8_t BS3 :1;
	volatile uint8_t BS4 :1;
	volatile uint8_t BS5 :1;
	volatile uint8_t BS6 :1;
	volatile uint8_t BS7 :1;
	volatile uint8_t BS8 :1;
	volatile uint8_t BS9 :1;
	volatile uint8_t BS10 :1;
	volatile uint8_t BS11 :1;
	volatile uint8_t BS12 :1;
	volatile uint8_t BS13 :1;
	volatile uint8_t BS14 :1;
	volatile uint8_t BS15 :1;
	volatile uint8_t BR0 :1;
	volatile uint8_t BR1 :1;
	volatile uint8_t BR2 :1;
	volatile uint8_t BR3 :1;
	volatile uint8_t BR4 :1;
	volatile uint8_t BR5 :1;
	volatile uint8_t BR6 :1;
	volatile uint8_t BR7 :1;
	volatile uint8_t BR8 :1;
	volatile uint8_t BR9 :1;
	volatile uint8_t BR10 :1;
	volatile uint8_t BR11 :1;
	volatile uint8_t BR12 :1;
	volatile uint8_t BR13 :1;
	volatile uint8_t BR14 :1;
	volatile uint8_t BR15 :1;
} GPIOx_BSRR_t;

typedef struct {
	volatile uint8_t LCK0 :1;
	volatile uint8_t LCK1 :1;
	volatile uint8_t LCK2 :1;
	volatile uint8_t LCK3 :1;
	volatile uint8_t LCK4 :1;
	volatile uint8_t LCK5 :1;
	volatile uint8_t LCK6 :1;
	volatile uint8_t LCK7 :1;
	volatile uint8_t LCK8 :1;
	volatile uint8_t LCK9 :1;
	volatile uint8_t LCK10 :1;
	volatile uint8_t LCK11 :1;
	volatile uint8_t LCK12 :1;
	volatile uint8_t LCK13 :1;
	volatile uint8_t LCK14 :1;
	volatile uint8_t LCK15 :1;
	volatile uint8_t LCK16 :1;
	volatile uint8_t Reserved0 :7;
	volatile uint8_t Reserved1;
} GPIOx_LCKR_t;

typedef struct {
	volatile uint8_t AFSEL0 : 4;
	volatile uint8_t AFSEL1 : 4;
	volatile uint8_t AFSEL2 : 4;
	volatile uint8_t AFSEL3 : 4;
	volatile uint8_t AFSEL4 : 4;
	volatile uint8_t AFSEL5 : 4;
	volatile uint8_t AFSEL6 : 4;
	volatile uint8_t AFSEL7 : 4;
} GPIOx_AFRL_t;

typedef struct {
	volatile uint8_t AFSEL0 : 4;
	volatile uint8_t AFSEL1 : 4;
	volatile uint8_t AFSEL2 : 4;
	volatile uint8_t AFSEL3 : 4;
	volatile uint8_t AFSEL4 : 4;
	volatile uint8_t AFSEL5 : 4;
	volatile uint8_t AFSEL6 : 4;
	volatile uint8_t AFSEL7 : 4;
} GPIOx_AFRH_t;

typedef struct {
	volatile uint8_t BR0 :1;
	volatile uint8_t BR1 :1;
	volatile uint8_t BR2 :1;
	volatile uint8_t BR3 :1;
	volatile uint8_t BR4 :1;
	volatile uint8_t BR5 :1;
	volatile uint8_t BR6 :1;
	volatile uint8_t BR7 :1;
	volatile uint8_t BR8 :1;
	volatile uint8_t BR9 :1;
	volatile uint8_t BR10 :1;
	volatile uint8_t BR11 :1;
	volatile uint8_t BR12 :1;
	volatile uint8_t BR13 :1;
	volatile uint8_t BR14 :1;
	volatile uint8_t BR15 :1;
	volatile uint8_t Reserved[2];
} GPIOx_BRR_t;

typedef struct {
	volatile uint8_t ASC0 :1;
	volatile uint8_t ASC1 :1;
	volatile uint8_t ASC2 :1;
	volatile uint8_t ASC3 :1;
	volatile uint8_t ASC4 :1;
	volatile uint8_t ASC5 :1;
	volatile uint8_t ASC6 :1;
	volatile uint8_t ASC7 :1;
	volatile uint8_t ASC8 :1;
	volatile uint8_t ASC9 :1;
	volatile uint8_t ASC10 :1;
	volatile uint8_t ASC11 :1;
	volatile uint8_t ASC12 :1;
	volatile uint8_t ASC13 :1;
	volatile uint8_t ASC14 :1;
	volatile uint8_t ASC15 :1;
	volatile uint8_t Reserved[2];
} GPIOx_ASCR_t;

typedef struct {
	GPIOx_MODER_t mode;
	GPIOx_OTYPER_t otype;
	GPIOx_OSPEEDR_t ospeed;
	GPIOx_PUPDR_t pupd;
	GPIOx_IDR_t id;
	GPIOx_ODR_t od;
	GPIOx_BSRR_t bsr;
	GPIOx_LCKR_t lck;
	GPIOx_AFRL_t afrl;
	GPIOx_AFRH_t afrh;
	GPIOx_BRR_t br;
	GPIOx_ASCR_t asc;
} GPIOx_t;

typedef struct {
	volatile uint32_t mode;
	volatile uint32_t otype;
	volatile uint32_t ospeed;
	volatile uint32_t pupd;
	volatile uint32_t id;
	volatile uint32_t od;
	volatile uint32_t bsr;
	volatile uint32_t lck;
	volatile uint32_t afrl;
	volatile uint32_t afrh;
	volatile uint32_t br;
	volatile uint32_t asc;
} GPIOx_v;

typedef union {
 	GPIOx_t structure;
 	GPIOx_v value;
} GPIOx_u;


volatile GPIOx_u * GPIOA_t = (GPIOx_u *)GPIOA_START;
volatile GPIOx_u * GPIOB_t = (GPIOx_u *)GPIOB_START;
volatile GPIOx_u * GPIOC_t = (GPIOx_u *)GPIOC_START;
volatile GPIOx_u * GPIOD_t = (GPIOx_u *)GPIOD_START;
volatile GPIOx_u * GPIOE_t = (GPIOx_u *)GPIOE_START;
volatile GPIOx_u * GPIOF_t = (GPIOx_u *)GPIOF_START;
volatile GPIOx_u * GPIOG_t = (GPIOx_u *)GPIOG_START;
volatile GPIOx_u * GPIOH_t = (GPIOx_u *)GPIOH_START;
volatile GPIOx_u * GPIOI_t = (GPIOx_u *)GPIOI_START;

#define AHB2ENR_START (volatile uint32_t*)(0x40021000+0x4C)
/* najmłodszy bit to zegar portu GPIOA, każdy kolejny to B,C,..,I
 * pod ten adres można wpisać po prostu 0b111111111 i zapomnieć (włączy zegary wszystkich portów GPIO) */

#define RCC_POWER (volatile uint32_t *)(0x40021058)
#define PWR_CR2 (volatile uint32_t *)(0x40007004)

// *RCC_POWER|=(1U<<28U); // te dwie linie włączą zasilanie dodatkowe dla wyświetlacza 7 segmentowego
// *PWR_CR2|=(1U<<9U);


#define GPIO_PIN_0_my (1U<<0U)
#define GPIO_PIN_1_my (1U<<1U)
#define GPIO_PIN_2_my (1U<<2U)
#define GPIO_PIN_3_my (1U<<3U)
#define GPIO_PIN_4_my (1U<<4U)
#define GPIO_PIN_5_my (1U<<5U)
#define GPIO_PIN_6_my (1U<<6U)
#define GPIO_PIN_7_my (1U<<7U)
#define GPIO_PIN_8_my (1U<<8U)
#define GPIO_PIN_9_my (1U<<9U)
#define GPIO_PIN_10_my (1U<<10U)
#define GPIO_PIN_11_my (1U<<11U)
#define GPIO_PIN_12_my (1U<<12U)
#define GPIO_PIN_13_my (1U<<13U)
#define GPIO_PIN_14_my (1U<<14U)
#define GPIO_PIN_15_my (1U<<15U)

typedef enum {
	GPIO_PIN_RESET_my=0U,
	GPIO_PIN_SET_my
} GPIO_PIN_STATE_t;


#endif // DEFS_H
