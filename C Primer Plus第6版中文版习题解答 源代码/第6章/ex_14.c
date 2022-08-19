/*
第六章：编程练习 14
*/
#include <stdio.h>
int main(void){
    double first[8], second[8];
    printf("Enter 8 data to the FIRST array: ");
    for(int i = 0; i < 8;i++){
        scanf("%lf",&first[i]);
    }
    /* 读取用户输入的 8 个数据，并赋值给第一个数组。*/
    for(int i = 0;i < 8;i++){
        double sum = 0;
        for(int j = 0;j<=i ;j++){
            sum = sum + first[j];
        }
        second[i] = sum;
    }
    /* 使用嵌套循环来计算第一个数组的前 N 项和。
     * 也可以使用单循环，代码如下：
     *     second[0] = first[0];
     *  for(int i = 1;i < 8;i++){
     *    second[i] =  second[i-1] + first[i];
     *   }
     * */
    printf("All the data of  two array:\n");
    printf("First  Array: ");
    for(int i = 0; i < 8;i++){
        printf("%12lf. ",first[i]);
    }
    printf("\nSecond Array: ");
    for(int i = 0; i < 8;i++){
        printf("%12lf. ",second[i]);
    }

    printf("\nDone!\n");
    return 0;
}

