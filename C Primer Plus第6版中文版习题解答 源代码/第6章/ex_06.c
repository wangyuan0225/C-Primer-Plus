/*
第六章：编程练习 6
*/
#include <stdio.h>
int main(void){
    int start ,end;
    printf("Please enter the start number:");
    scanf("%d",&start);
    printf("Please enter the end number:");
    scanf("%d",&end);
    /* 读取用户输入的其实数据和终止数据。*/
    printf("   Ori:     Square:    Cubic:\n");
    for (int i = start; i <= end ; i++){
        printf("%6d,%10d,%10d",i,i*i,i*i*i);
        printf("\n");
        /* 打印三个数据，循环的入口判断为i <= end，保证
         * 最后一个值是用户输入的结束值。
         * 整型数据计算大数的立方值可能会产生溢出，需要注意。
         * */
    }
    return 0;
}
