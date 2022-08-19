/*
第九章：编程练习 4
*/
#include <stdio.h>
double harmean(double x, double y);
/*函数声明，调和平均数，double类型参数型x, y, 返回值 double类型*/
int main(void) {
    double d1,d2;
    printf("Enter tow float number:");
    scanf("%lf %lf",&d1,&d2);
    printf("The HarMEAN of  %g and %g is %g.",d1,d2,harmean(d1,d2));
    return 0;
}

double harmean(double x, double y){
    return 2/(1/x + 1/y);
}
/*两个数的调和平均数基本算法*/
