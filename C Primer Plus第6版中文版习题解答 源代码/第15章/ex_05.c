/*
第十五章：编程练习 5
*/

#include <stdio.h>
#include <limits.h>

int retate_l(int n, int length);
int main(int argc, char *argv[])
{
    int i, length;
    printf("Enter the a number and a move bit:");
    scanf("%d %d",&i,&length);
    printf("the %d move  %d bit, result is %d\n",i,length,retate_l(i, length));
    return 0;
}
int retate_l(int n, int length){
    const static int size = CHAR_BIT * sizeof(int);
    if(length >size || length < 0){
        printf("Error length.\n");
        return 0;
        /* 输入参数判断。*/
    }
    for (int i = 0; i < length; i++) {
        if(n&(1<<(size - 1))){
            /* 先读取将要被移出的数据，即把最高位设置为1，并与n进行
             * 与操作，如果结果为0，则直接移位，如果为 1 则移位，左侧置 1*/
            n <<=1;
            n |=1;
        }else{
            n <<=1;
        }
    }
    return n;
}
