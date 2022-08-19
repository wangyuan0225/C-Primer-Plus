/*
第六章：编程练习 2
*/
#include <stdio.h>
int main(void){
    int i ,j;
    for (i = 1; i <= 5 ; i++){
        /* 外部循环控制行数*/
        for (j = 0; j < i ; j++)
            /* 内部循环使用j < i 即表示第 N 行打印 N 个*/
            printf("$");
        printf("\n");
    }
    return 0;
}
