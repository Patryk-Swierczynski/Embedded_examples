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
}
union abc {
	struct bits32_t field;
	uint32_t value;
}


union cba {
	struct bits16_t field;
	uint32_t value;
}
