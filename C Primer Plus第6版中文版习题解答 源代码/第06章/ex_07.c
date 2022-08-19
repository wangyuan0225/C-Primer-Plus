/*
第六章：编程练习 7
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char word[30];
    printf("Please enter the words: ");
    scanf("%s",word);
    /* scanf()函数读取用户输入，保存至word字符数组。*/
    printf("The word you enter is : %s\n",word);
    printf("The reverse word you enter is : ");
    for (int i = strlen(word) - 1; i >= 0 ; i--){
        printf("%c",word[i]);
    }
    printf("\n");
    /* 逆序打印，下标值通过strlen()函数获得。strlen()返回的长度值
     * 不包含'\0',但是数组下标从0～(长度-1)*/
    return 0;
}
