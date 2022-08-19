/*
第十章：编程练习 3
*/
#include <stdio.h>

int get_max(int number[], int n);
/*s使用传统数组方式进行参数传递，形式参数n表示整型数组长度。
 * */

int main(void) {
    int source[100] = {1, 2, 3, 4, 5};
    printf("The largest number in array is %d ",get_max(source, 100));
    return 0;
}
int get_max(int number[], int n){
    int max = number[0];
    for(int i = 0; i < n; i++)
        if(max < number[i]) max = number[i];
        /*通过循环语句遍历数组的每一个元素，比较取得最大值。
         * */
    return max;
    /*函数返回该数组的最大值数据*/
}
