/*
第六章：编程练习 4
*/
#include <stdio.h>
int main(void){
    int i ,j;
    char c = 'A';
    /* 待打印字符初始化。*/
    for (i = 1; i <= 6 ; i++){
        /* 外部循环控制行数，共 6 行。*/
        for (j = 0; j < i ; j++,c++)
            /* 内部循环不初始化待打印数据，且使用c++ 进行递增更新*/
            printf("%c",c);
        printf("\n");
    }
    return 0;
}
