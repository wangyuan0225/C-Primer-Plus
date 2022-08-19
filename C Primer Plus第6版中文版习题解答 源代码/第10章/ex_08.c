/*
第十章：编程练习 8
*/
#include <stdio.h>
#include <stdlib.h>

void copy_ptr(double *t, double *s, int n);
/* 只保留通过指针作为形式参数的函数 */
int main(void)
{
    double src[] = {1, 2, 3, 4, 5, 6, 7};
    double targ[3];
    copy_ptr(targ, src + 2, 3);
    /* 函数实际参数为目标数组地址，源数组的第三个元素的地址，拷贝三个元素*/
    printf("Now Show the src array:\n");
    for (int i = 0 ;i < 5; i++)
        printf("%.0lf ", src[i]);

    printf("\nNow Show the dest array:\n");
    for (int i = 0; i < 3; ++i)
        printf("%.0lf ", targ[i]);
    return 0;
}
void copy_ptr(double *t, double *s, int n){
    for(int i = 0 ;i < n ;i++)
        *(t+i) = *(s+i);
    /*使用指针作为函数参数，需要表明指针的访问范围，不能越界。并使用
     *  *号取值进行数据的赋值操作*/
}
