/*
第六章：编程练习 9
*/
#include <stdio.h>
float calc(float x, float y);
int main(void){
    float x,y;
    printf("Please enter the two float data(seprate by blank): ");
    while(scanf("%f %f",&x,&y) == 2){
        printf("The answer is %f\n",calc(x,y));
        printf("Please enter the two float data(seprate by blank): ");
    }
    printf("Program end!");
    return 0;
}
float calc(float x, float y){
    float result;
    result  = (x-y)/(x*y);
    return result;
    /* 处理运算的函数，整个函数体也可以简化写为 return (x-y)/(x*y)；
     * 函数不处理 x 或者 y 为 0 的情况。*/
}
