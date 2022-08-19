/*
第九章：编程练习 10
*/
#include <stdio.h>
void to_base_n(unsigned long n, unsigned short t);
/* 进制转换，待转换数类型是正整数，因此使用无符号类型标识。*/
int main(void) {
    unsigned long number;
    unsigned short target;
    printf("Enter the integer and N for notation(q to quit):");
    while(scanf("%lu %hu",&number, &target) == 2){
        if(target < 2 || target > 10){
            printf("Please input N between 2 ~ 10!\n");
            printf("Enter the integer and N for notation(q to quit):");
            continue;
        }
        printf("Convert %lu to %hu notation is: ",number,target);
        to_base_n(number, target);
        putchar('\n');
        printf("Enter the integer and N for notation(q to quit):");
    }
    return 0;
}
void to_base_n(unsigned long n, unsigned short t){
    if(t < 2 || t > 10){
        printf("The function noly convert 2 ~ 10\n");
        return;
    }/* 函数内部的参数判断。*/
    int r;
    r = n % t;
    if(n >= 2) to_base_n(n/t, t);
    printf("%d",r);
}

