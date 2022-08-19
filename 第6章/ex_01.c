/*
第六章：编程练习 1
*/
#include <stdio.h>
int main(void){
    char alphabet[26];
    int i;
    char c = 'a';
    /* 定义变量i 作为数组的下标，c 作为从字符 a 开始递增
     * 获得26个字母。*/
    for (i = 0; i < 26 ; i++,c++)
        alphabet[i] = c;
    /* for 循环 的循环更新部分，更新了下标和 字母表*/
    for (i = 0; i < 26 ; i++)
        printf("%c ",alphabet[i]);
    return 0;
}
