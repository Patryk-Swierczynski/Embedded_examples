#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
enum modes{
    MODE_AF = 2,
};

void displayNibbles(uint32_t number){
    for(size_t i = sizeof(number)*8;i > 0 ; i--){
        if(!((i)%4))printf("|");
        printf("%d",(number&(1<<(i-1)))>0?1:0);
    }
    printf("\n");
}


int main(void) {
    const int FN = 3;
    const int FW = 2;

    volatile uint32_t  * const GPIO_MODER = (uint32_t*) calloc(1,sizeof(uint32_t));
    uint32_t v = *GPIO_MODER;
    v &= ~(((1u << FW)-1) << (FW * FN));
    v |= MODE_AF << FW * FN;
    displayNibbles(v);
    return 0;
}
