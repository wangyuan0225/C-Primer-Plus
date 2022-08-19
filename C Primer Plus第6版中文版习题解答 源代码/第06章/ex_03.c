/*
第六章：编程练习 2
*/
#include <stdio.h>
int main(void){
    int i ,j;
    char c;
    /* 循环控制变量的定义。*/
    for (i = 1; i <= 6 ; i++){
        /* 外部循环控制行数，共6行*/
        for (j = 0, c = 'F'; j < i ; j++,c--)
            /* 内部循环控制行内，j<i 表示 N 行打印 N 个字符
             * char 类型 c ，从'F'，开始，每次打印更新 c-- 
             * 实现字符的递减效果。第6行，可以减到 'A' */
            printf("%c",c);
        printf("\n");
    }
    return 0;
}
