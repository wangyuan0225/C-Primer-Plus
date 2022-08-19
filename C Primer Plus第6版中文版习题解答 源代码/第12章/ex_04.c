/*
第十二章：编程练习 4 
*/
#include <stdio.h>

static int count = 0;
/* 静态内部链接的变量count功能是保存函数运行次数。*/
int run_counter(void);

int main(int argc, char *argv[]) {

    for(int i = 0;i<100;i++)
        printf("The function run_time run %d times.\n",run_counter());
    return 0;
}

int run_counter(void){
    return ++count;
    /* 函数内部使用内部链接变量，由于其存储期是静态，
     * 所以每一次调用结束，count保存数据都不会丢失。*/
}
