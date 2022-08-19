/*
第十五章：编程练习 1
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 32
int bstoi(char *st);
int main(void)
{
    char input[SIZE];
    printf("Enter a binary string:");
    scanf("%s",input);
    printf("%d\n", bstoi(input));
    return 0;
}
int bstoi(char *st){
    int sum = 0;
    while(*st != '\0'){
        sum *= 2;
        sum += *st++ - '0';
    }
    /* 通过过循环每一位上的值都持续乘以2，最终实现位值上
     * 数据的持续增长，该方法是从高位开始累积 */
    return sum;
}
