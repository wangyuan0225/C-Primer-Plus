/*
第四章：编程练习 4
*/
#include <stdio.h>
int main() {
    float heigh;
    char name[40];
    printf("Enter your name :");
    scanf("%s",name);
    /* scanf()函数读取用户输入的姓名,存入name[]数组。 */
    printf("Hi %s, how tall you are( inch ):",name);
    scanf("%f",&heigh);
    /* scanf()读取用户输入的英寸数值，存入变量heigh */
    printf("%s, you are %.3f feet tall \n",name,heigh/12.0);
    /* 题目要求显示小数点后3位数字。*/
    return 0;
}
