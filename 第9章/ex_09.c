/*
第九章：编程练习 9
*/
#include <stdio.h>
double power(double n, int p);
/*计算double类型数据n 的 p 次幂。返回值类型为double。*/

int main(void) {
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power");
    printf(" to which \nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while(scanf("%lf %d",&x,&exp) == 2)
    {
        xpow = power(x,exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter the next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoy this power trip -- bye!\b");
    return 0;
}

double power(double n, int p){
    double pow = 1;
    int i;
    if(n == 0 && p ==0){
        printf("The %g to the power %c is not define, return 1!\n",n , p);
        return 1;
    };/*0 的 0 次幂单独标注，函数返回*/
    if(n == 0) return 0;/* 0 的任何( 0 除外 )次幂等于 0 */
    if(p == 0) return 1;/* 除 0 外的任何数的0次幂等于 1 */
    if(p > 0){
        return n*power(n, p-1);
        /* 正p次幂的递归。*/
    }else
    {
        return power(n,p+1)/n;
        /* 负p次幂的递归*/
    }
}
