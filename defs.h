#ifndef DEFS_H
#define DEFS_H
#include <stdint.h>
struct bits32_t {
	uint32_t f0 : 2;
	uint32_t f1 : 2;
	uint32_t f2 : 2;
	uint32_t f3 : 2;
	uint32_t f4 : 2;
	uint32_t f5 : 2;
	uint32_t f6 : 2;
	uint32_t f7 : 2;
	uint32_t f8 : 2;
	uint32_t f9 : 2;
	uint32_t f10 : 2;
	uint32_t f11 : 2;
	uint32_t f12 : 2;
	uint32_t f13 : 2;
	uint32_t f14 : 2;
	uint32_t f15 : 2;
};
struct bits16_t {
	uint32_t f0 : 1;
	uint32_t f1 : 1;
	uint32_t f2 : 1;
	uint32_t f3 : 1;
	uint32_t f4 : 1;
	uint32_t f5 : 1;
	uint32_t f6 : 1;
	uint32_t f7 : 1;
	uint32_t f8 : 1;
	uint32_t f9 : 1;
	uint32_t f10 : 1;
	uint32_t f11 : 1;
	uint32_t f12 : 1;
	uint32_t f13 : 1;
	uint32_t f14 : 1;
	uint32_t f15 : 1;
};

union abc {
	struct bits32_t field;
	uint32_t value;
};


union cba {
	struct bits16_t field;
	uint32_t value;
};

#define GPIOA_START 0x48000000
#define GPIOA_END 0x480003ff

#define GPIOB_START 0x48000400
#define GPIOB_END 0x480007ff
#define GPIOC_START 0x48000800
#define GPIOC_END 0x480003ff
#define GPIOD_START 0x48000C00
#define GPIOD_END 0x48000fff
#define GPIOE_START 0x48001000
#define GPIOE_END 0x480013ff
#define GPIOF_START 0x48001400
#define GPIOF_END 0x480017ff
#define GPIOG_START 0x48001800
#define GPIOG_END 0x480013ff
#define GPIOH_START 0x48001C00
#define GPIOH_END 0x48001fff
#define GPIOI_START 0x48002000
#define GPIOI_END 0x480023ff

typedef enum {
	MODE_INPUT = 0U,
	MODE_GP,
	MODE_AF,
	MODE_ANALOG
} GPIO_MODE_SELECTION_t;

typedef struct {
	uint8_t MODE0 : 2;
	uint8_t MODE1 : 2;
	uint8_t MODE2 : 2;
	uint8_t MODE3 : 2;
	uint8_t MODE4 : 2;
	uint8_t MODE5 : 2;
	uint8_t MODE6 : 2;
	uint8_t MODE7 : 2;
	uint8_t MODE8 : 2;
	uint8_t MODE9 : 2;
	uint8_t MODE10 : 2;
	uint8_t MODE11 : 2;
	uint8_t MODE12 : 2;
	uint8_t MODE13 : 2;
	uint8_t MODE14 : 2;
	uint8_t MODE15 : 2;
} GPIOx_MODER_t;

typedef enum {
	OTYPE_PUSH_PULL = 0U,
	OTYPE_OPEN_DRAIN
} GPIO_OTYPE_SELECTION_t;

typedef struct {
	uint8_t OT0 :1;
	uint8_t OT1 :1;
	uint8_t OT2 :1;
	uint8_t OT3 :1;
	uint8_t OT4 :1;
	uint8_t OT5 :1;
	uint8_t OT6 :1;
	uint8_t OT7 :1;
	uint8_t OT8 :1;
	uint8_t OT9 :1;
	uint8_t OT10 :1;
	uint8_t OT11 :1;
	uint8_t OT12 :1;
	uint8_t OT13 :1;
	uint8_t OT14 :1;
	uint8_t OT15 :1;
	uint8_t Reserved[2];
} GPIOx_OTYPER_t;

typedef enum {
	OSPEED_LOW = 0U,
	OSPEED_MEDIUM,
	OSPEED_HIGH,
	OSPEED_VERY_HIGH
} GPIO_OSPEED_SELECTION_t;

typedef struct {
	uint8_t OSPEED0 : 2;
	uint8_t OSPEED1 : 2;
	uint8_t OSPEED2 : 2;
	uint8_t OSPEED3 : 2;
	uint8_t OSPEED4 : 2;
	uint8_t OSPEED5 : 2;
	uint8_t OSPEED6 : 2;
	uint8_t OSPEED7 : 2;
	uint8_t OSPEED8 : 2;
	uint8_t OSPEED9 : 2;
	uint8_t OSPEED10 : 2;
	uint8_t OSPEED11 : 2;
	uint8_t OSPEED12 : 2;
	uint8_t OSPEED13 : 2;
	uint8_t OSPEED14 : 2;
	uint8_t OSPEED15 : 2;
} GPIOx_OSPEEDR_t ;

typedef enum {
	PUPD_NO_PULLING = 0U,
	PUPD_PULL_UP,
	PUPD_PULL_DOWN,
	RESERVED //do not use!
} GPIO_PUPD_SELECTION_t;

typedef struct {
	uint8_t PUPD0 : 2;
	uint8_t PUPD1 : 2;
	uint8_t PUPD2 : 2;
	uint8_t PUPD3 : 2;
	uint8_t PUPD4 : 2;
	uint8_t PUPD5 : 2;
	uint8_t PUPD6 : 2;
	uint8_t PUPD7 : 2;
	uint8_t PUPD8 : 2;
	uint8_t PUPD9 : 2;
	uint8_t PUPD10 : 2;
	uint8_t PUPD11 : 2;
	uint8_t PUPD12 : 2;
	uint8_t PUPD13 : 2;
	uint8_t PUPD14 : 2;
	uint8_t PUPD15 : 2;
} GPIOx_PUPDR_t;

typedef struct {
	uint8_t ID0 :1;
	uint8_t ID1 :1;
	uint8_t ID2 :1;
	uint8_t ID3 :1;
	uint8_t ID4 :1;
	uint8_t ID5 :1;
	uint8_t ID6 :1;
	uint8_t ID7 :1;
	uint8_t ID8 :1;
	uint8_t ID9 :1;
	uint8_t ID10 :1;
	uint8_t ID11 :1;
	uint8_t ID12 :1;
	uint8_t ID13 :1;
	uint8_t ID14 :1;
	uint8_t ID15 :1;
	uint8_t Reserved[2];
} GPIOx_IDR_t;
typedef struct {
	uint8_t OD0 :1;
	uint8_t OD1 :1;
	uint8_t OD2 :1;
	uint8_t OD3 :1;
	uint8_t OD4 :1;
	uint8_t OD5 :1;
	uint8_t OD6 :1;
	uint8_t OD7 :1;
	uint8_t OD8 :1;
	uint8_t OD9 :1;
	uint8_t OD10 :1;
	uint8_t OD11 :1;
	uint8_t OD12 :1;
	uint8_t OD13 :1;
	uint8_t OD14 :1;
	uint8_t OD15 :1;
	uint8_t Reserved[2];
} GPIOx_ODR_t;

typedef struct {
	uint8_t BS0 :1;
	uint8_t BS1 :1;
	uint8_t BS2 :1;
	uint8_t BS3 :1;
	uint8_t BS4 :1;
	uint8_t BS5 :1;
	uint8_t BS6 :1;
	uint8_t BS7 :1;
	uint8_t BS8 :1;
	uint8_t BS9 :1;
	uint8_t BS10 :1;
	uint8_t BS11 :1;
	uint8_t BS12 :1;
	uint8_t BS13 :1;
	uint8_t BS14 :1;
	uint8_t BS15 :1;
	uint8_t BR0 :1;
	uint8_t BR1 :1;
	uint8_t BR2 :1;
	uint8_t BR3 :1;
	uint8_t BR4 :1;
	uint8_t BR5 :1;
	uint8_t BR6 :1;
	uint8_t BR7 :1;
	uint8_t BR8 :1;
	uint8_t BR9 :1;
	uint8_t BR10 :1;
	uint8_t BR11 :1;
	uint8_t BR12 :1;
	uint8_t BR13 :1;
	uint8_t BR14 :1;
	uint8_t BR15 :1;
} GPIOx_BSRR_t;

typedef struct {
	uint8_t LCK0 :1;
	uint8_t LCK1 :1;
	uint8_t LCK2 :1;
	uint8_t LCK3 :1;
	uint8_t LCK4 :1;
	uint8_t LCK5 :1;
	uint8_t LCK6 :1;
	uint8_t LCK7 :1;
	uint8_t LCK8 :1;
	uint8_t LCK9 :1;
	uint8_t LCK10 :1;
	uint8_t LCK11 :1;
	uint8_t LCK12 :1;
	uint8_t LCK13 :1;
	uint8_t LCK14 :1;
	uint8_t LCK15 :1;
	uint8_t LCK16 :1;
	uint8_t Reserved0 :7;
	uint8_t Reserved1;
} GPIOx_LCKR_t;

typedef struct {
	uint8_t AFSEL0 : 4;
	uint8_t AFSEL1 : 4;
	uint8_t AFSEL2 : 4;
	uint8_t AFSEL3 : 4;
	uint8_t AFSEL4 : 4;
	uint8_t AFSEL5 : 4;
	uint8_t AFSEL6 : 4;
	uint8_t AFSEL7 : 4;
} GPIOx_AFRL_t;

typedef struct {
	uint8_t AFSEL0 : 4;
	uint8_t AFSEL1 : 4;
	uint8_t AFSEL2 : 4;
	uint8_t AFSEL3 : 4;
	uint8_t AFSEL4 : 4;
	uint8_t AFSEL5 : 4;
	uint8_t AFSEL6 : 4;
	uint8_t AFSEL7 : 4;
} GPIOx_AFRH_t;

typedef struct {
	uint8_t BR0 :1;
	uint8_t BR1 :1;
	uint8_t BR2 :1;
	uint8_t BR3 :1;
	uint8_t BR4 :1;
	uint8_t BR5 :1;
	uint8_t BR6 :1;
	uint8_t BR7 :1;
	uint8_t BR8 :1;
	uint8_t BR9 :1;
	uint8_t BR10 :1;
	uint8_t BR11 :1;
	uint8_t BR12 :1;
	uint8_t BR13 :1;
	uint8_t BR14 :1;
	uint8_t BR15 :1;
	uint8_t Reserved[2];
} GPIOx_BRR_t;

typedef struct {
	uint8_t ASC0 :1;
	uint8_t ASC1 :1;
	uint8_t ASC2 :1;
	uint8_t ASC3 :1;
	uint8_t ASC4 :1;
	uint8_t ASC5 :1;
	uint8_t ASC6 :1;
	uint8_t ASC7 :1;
	uint8_t ASC8 :1;
	uint8_t ASC9 :1;
	uint8_t ASC10 :1;
	uint8_t ASC11 :1;
	uint8_t ASC12 :1;
	uint8_t ASC13 :1;
	uint8_t ASC14 :1;
	uint8_t ASC15 :1;
	uint8_t Reserved[2];
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
	uint32_t mode;
	uint32_t otype;
	uint32_t ospeed;
	uint32_t pupd;
	uint32_t id;
	uint32_t od;
	uint32_t bsr;
	uint32_t lck;
	uint32_t afrl;
	uint32_t afrh;
	uint32_t br;
	uint32_t asc;
} GPIOx_v;

typedef union {
	GPIOx_t structure;
	GPIOx_v value;
} GPIOX_u;


GPIOX_u * GPIOA = (GPIOX_u *)GPIOA_START;
GPIOX_u * GPIOB = (GPIOX_u *)GPIOB_START;
GPIOX_u * GPIOC = (GPIOX_u *)GPIOC_START;
GPIOX_u * GPIOD = (GPIOX_u *)GPIOD_START;
GPIOX_u * GPIOE = (GPIOX_u *)GPIOE_START;
GPIOX_u * GPIOF = (GPIOX_u *)GPIOF_START;
GPIOX_u * GPIOG = (GPIOX_u *)GPIOG_START;
GPIOX_u * GPIOH = (GPIOX_u *)GPIOH_START;
GPIOX_u * GPIOI = (GPIOX_u *)GPIOI_START;

#define AHB2ENR_START (0x40021000+0x4C)
/* najmłodszy bit to zegar portu GPIOA, każdy kolejny to B,C,..,I
 * pod ten adres można wpisać po prostu 0x9 i zapomnieć (włączy zegary wszystkich portów GPIO) */

#endif // DEFS_H
