/*
第二章：编程练习 6
*/
#include <stdio.h>
int main(void) {
    int toes;
    toes = 10;
    /* 定义整型变量toes，并赋值为10。*/
    printf("The Variable toes = %d.\n",toes);
    printf("double toes = %d.\n",2*toes);
    /* 计算并打印 toes的两倍，也可以先计算再打印，例如：
     * int d_toes = 2*toes；
     * printf("double toes = %d.\n",d_toes);
     * 但最好不要写成:
     * toes = 2*toes;
     * 这样会修改toes的值，并影响到toes的平方的计算。
     * */
    printf("toes' square = %d.\n",toes*toes);
    /*计算并打印 toes的平方。
     * */
    return 0;
}
