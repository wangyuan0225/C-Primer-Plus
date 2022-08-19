/*
第九章：编程练习 1
*/
#include <stdio.h>
double min(double x, double y);
/*函数的声明，返回两个double类型数中的较小数据，因此，返回值也是double类型*/
int main(void) {
    double d1,d2;
    printf("Enter tow float number:");
    scanf("%lf %lf",&d1,&d2);
    printf("you input %g and %g. The MIN is %g.",d1,d2,min(d1,d2));
    return 0;
}

double min(double x, double y){
    if(x < y) return x;
    else return y;
    /*对于常见的简单逻辑判断函数，除了使用if 语句之外，还常用？：运算表达式
     * 这样表达更加简洁和清晰。
     * return x < y ? x : y;
     * */
}
