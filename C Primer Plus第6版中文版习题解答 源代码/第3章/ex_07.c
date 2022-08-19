/*
第三章：编程练习 7
*/

#include <stdio.h>
#define INCH_TO_CM 2.54
/* 英寸到厘米的转换系数。 */
int main(void) {
    float inch,cm;
    printf("Enter the inch of your heigh:");
    scanf("%f",&inch);
    cm = inch*INCH_TO_CM;
    /* 将英寸转换成厘米。*/
    printf("Hi ,your are %0.2f inch ,or %.2f cm heigh\n",inch,cm);
        /* 打印计算结果。*/
    return 0;
}
