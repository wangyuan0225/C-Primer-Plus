/*
第六章：编程练习 10
*/
#include <stdio.h>
int main(void){
    int lower,upper;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&lower,&upper);
    /* 使用scanf()函数读取 上下限数值。*/
    while(upper > lower){
        /* 判断用户输入上下限数值*/
        int sum = 0;
        for(int i = lower;i <= upper; i++){
            sum = sum + i*i;
        /* for循环计算平方和*/
        }
        printf("The sum of the squares form %d to %d is %d\n",lower,upper,sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d",&lower,&upper);
        /* 用户再次输入，上下限数值*/
    }
    printf("Done!");
    return 0;
}
