/*
第六章：编程练习 13
*/
#include <stdio.h>
int main(void){
    int data[8];
    data[0] = 2;
    /* 初始化第一个元素为2 的一次幂 */
    for(int i = 1; i < 8;i++){
        data[i] = data[i-1] * 2;
    }
    /* 2 的 n 次幂等一 2乘以 2的n-1次幂。*/
    int i = 0;
    do{
        printf("%d  ",data[i++]);
    }while(i<8);

    printf("\nDone!\n");
    return 0;
}
