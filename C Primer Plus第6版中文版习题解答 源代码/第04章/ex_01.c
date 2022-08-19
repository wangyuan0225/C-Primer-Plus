/*
第四章：编程练习 1
*/
#include <stdio.h>
int main(void){
    char name[40];
    char surname[40];
    printf("Please input your first name:");
    scanf("%s",name);
    /* 读取名字输入，存储至name[]数组。由于scanf()函数的特性，
     * 字符串的输入不能有空白。*/
    printf("Please input your last name:");
    scanf("%s",surname);
    /* 读取姓输入，存储至surname[]数组*/
    printf("Hello, %s, %s.\n",name,surname);
    return 0;
}
