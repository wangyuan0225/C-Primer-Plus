/*
第九章：编程练习 5
*/
#include <stdio.h>
void larger_of(double *x, double *y);
/*函数需要修改主调函数的值，因此需要使用指针作为函数的参数。
 * 且不需要返回值。
 * */
int main(void) {
    double d1,d2;
    printf("Enter tow float number:");
    scanf("%lf %lf",&d1,&d2);
    printf("Data you input is %g and %g.\n",d1,d2);
    larger_of(&d1,&d2);
    printf("After function.data is %g and %g.\n",d1,d2);
}

void larger_of(double *x, double *y){
    if( *x > *y) *y = *x;
    else *x = *y;
/* 也可以使用？ ： 进行判断和赋值。代码如下：*x > *y ? (*y = *x) : (*x = *y);
 */
}
