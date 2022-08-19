/*
 * 第五章：编程练习 7
 * */
#include <stdio.h>

double cubic(double n);
int main(int argc, char *argv[]) {
    double input;
    printf("Enter the double datum to calc cubic :");
    scanf("%lf",&input);
    /* 读取用户输入 */
    cubic(input);
    /* 调用立方函数计算立方值 */
    printf("PROGRAM EXIT!\n");
    return 0;
}
double cubic(double n){
    double t = n * n * n;
    printf("The %lg's cubic is %lg !\n",n,t);
    return t;
}
/* 定义立方函数 */
