/*
第九章：编程练习 6
*/
#include <stdio.h>
void ordering(double *x, double *y, double *z);
/*ordering()函数的参数是三个指向double类型变量的指针。无返回值。
 * */
int main(void) {
    double d1,d2,d3;
    printf("Enter tow float number:");
    scanf("%lf %lf %lf",&d1,&d2,&d3);
    printf("Data you input is %g, %g and %g.\n",d1,d2,d3);
    ordering(&d1,&d2,&d3);
    printf("After function. data is %g, %g and %g.\n",d1,d2,d3);
}

void ordering(double *x, double *y, double *z){
    double temp;
    if(*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x > *z) {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if(*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}
/*ordering()函数的基本算法是：三个变量两两比较，符合条件就交换数据值。
 * */
