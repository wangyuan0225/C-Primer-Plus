/*
第二章：编程练习 7
*/
int smile(void);
#include <stdio.h>
int main(void) {
    smile();smile();smile();
    printf("\n");
    /* 打印第一行 ，三个"Smile!"*/
    smile();smile();
    printf("\n");
    /* 打印第二行，两个"Smile!"*/
    smile();
    /* 打印第三行，一个"Smile!"*/
    return 0;
}
int smile(void){
    printf("Smile!");
    return 0;
}
