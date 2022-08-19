/* 
第十一章  编程练习 15 
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int myatoi(char* st);
int main(int argc, char *argv[]) {
    char test[8];
    printf("Enter a number of int:");
    scanf("%s",test);
    printf("you input int is: %d\n",myatoi(test));
    return 0;
}
int myatoi(char* st){
    int result = 0;
    int bit_mark = 1;
    int length = strlen(st);
    /* 从末尾开始转换，获取字符串的长度*/
    for(int i = length ;i > 0 ;i--){
        if(isdigit(*(st+i-1)) == 0){
            /* 从字符串的末尾非空字符开始读取数据，因此需要减 1 。*/
            printf("Error in character.\n");
            return 0;
            /* 如果任意数位存在非数字字符，返回0 */
        }
        result += (*(st+i-1) - '0')*bit_mark;
        /* result 通过提取字符串中数字字符，并根据bit_mark记录的位数计算数据值*/
        bit_mark *= 10;
        /* 字符串转换从个位开始，因此bit_mark通过循环，不断乘 10 递增。*/
    }
    return result;
}

