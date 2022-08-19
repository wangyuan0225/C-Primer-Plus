/*
第六章：编程练习 15
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char data[256];
    printf("Enter the char in a line : ");
    int i = 0;
    do{
        scanf("%c",&data[i]);
    }while(data[i]!='\n' && ++i);
    /* 循环读取用户输入的字符，并保存之字符数组，直到用户输入回车符
     * 循环未检查输入字符数量，特定情况可能会产生溢出*/
    printf("The reverse char of the data: ");
    for(i--;i >=0;i--){
        /* 原下标 i 为最后一个字符的下标，初始化时 i-- 目的删除最后一个换行符 */
        printf("%c",data[i]);
    }
    printf("\nDone!\n");
    return 0;
}
