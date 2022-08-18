/*
第二章：编程练习 8
*/
#include <stdio.h>

int one_three(void);
int two(void);
/* 两个函数的声明*/
int main(void) {
    printf("Starting now:\n");
    one_three();
    printf("Done!\n");
    return 0;
}
int one_three(void){
    printf("one\n");
    two();
    /* 调用two()函数*/
    printf("three\n");
    return 0;
}
int two(void){
    printf("two\n");
    return 0;
}
