/*
第九章：编程练习 11
*/
#include <stdio.h>
void Fibonacci(int n);
/* 计算斐波那契数列的前 n 项。无返回值。*/
int main(void) {
    int n;
    printf("Enter the number of Fibonacci (q to quit):");
    while(scanf("%d",&n) == 1){
        if(n >= 2){
            Fibonacci(n);
            printf("Enter the number of Fibonacci (q to quit):");
        }
    }
    return 0;
}
void Fibonacci(int n){
    unsigned long f1,f2,temp;
    /* 考虑斐波那契数列增长速度，使用无符号长整型，能够显示更多数据项。*/
    f1 = 1;
    f2 = 1;
    for(int i = 0 ;i < n; i++){
        printf("%lu ",f1);
        temp = f1+f2;
        f1 = f2;
        f2 = temp;
    }
    printf("\n");
}
