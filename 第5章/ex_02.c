/*
第五章：编程练习 2
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    int counter, i = 0;
    printf("PRINT COUNTINUE 10 NUMBERS!\n");
    printf("PLEASE INPUT THE START NUMBER :");
    scanf("%d",&counter);
    /* 读取用户输入，保存至counter */
    while(i++ < 11){
        printf(" %d \n",counter++);
    }
    /* 循环十次，打印范围为输入数据开始的后十个数字 */
    printf("PROGRAM EXIT!\n");
    return 0;
}

