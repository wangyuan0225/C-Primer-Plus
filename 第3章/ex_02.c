/*
第三章：编程练习 2
*/
#include <stdio.h>
int main(void) {
    int input;
    printf("Enter a value of char int ASCII:");
    scanf("%d",&input);
    /* 通过scanf()函数读取用户输入，并存储在input变量中。*/
    printf("You input value is %d, and char is %c\n",input,input);
    /* 通过转换说明%d，%c 打印整型数值和字符。*/
    return 0;
}
