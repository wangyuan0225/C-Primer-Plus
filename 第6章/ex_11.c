/*
第六章：编程练习 11
*/
#include <stdio.h>
int main(void){
    int data[8];
    printf("Enter the 8 integer data (seperate by blank): ");
    for(int i = 0;i < 8; i++){
        scanf("%d",&data[i]);
    }
    /* 通过用户输入，读取8个整型数据*/

    printf("Ok, the reverse data is :");
    for(int i = 7;i >= 0 ; i--){
        printf(" %d",data[i]);
    }
    /* 倒序打印，需要注意下标越界问题*/
    printf("\nDone!\n");
    return 0;
}
