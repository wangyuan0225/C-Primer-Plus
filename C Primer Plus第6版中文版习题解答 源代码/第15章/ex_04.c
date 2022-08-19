/*
第十五章：编程练习 4
*/

#include <stdio.h>
#include <limits.h>

int get_bit(int n, int pos);

int main(int argc, char *argv[])
{
    int i, pos;
    printf("Enter the a number and a position.:");
    scanf("%d %d", &i, &pos);
    printf("the %d position of %d is %d\n",pos,i,get_bit(i, pos));
    return 0;
}

int get_bit(int n, int pos){
    const static int size = CHAR_BIT * sizeof(int);
    if(pos >size || pos < 0){
        printf("Error position.\n");
        return -1;
    }/* 输入参数判断 */
    if(1&(n>>pos))
        return 1;
    /* 移位并且通过与判断pos位置上的值。*/
    else return 0;
}

