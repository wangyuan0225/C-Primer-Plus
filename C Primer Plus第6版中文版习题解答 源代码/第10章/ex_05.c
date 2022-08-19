/*
第十章：编程练习 5
*/
#include <stdio.h>

double get_range(double number[], int n);
/*传统方式以数组和长度作为函数参数
 * */

int main(void) {
    double source[12] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};
    printf("The max diff in array is %g ",get_range(source, 12));
    return 0;
}
double get_range(double number[], int n){
    double max = number[0];
    double min = number[0];
    for(int i = 0; i < n; i++){
        if(max < number[i]) max = number[i];
        if(min > number[i]) min = number[i];
    }
    /*初始变量max，min为临时极大值极小值，循环完成后即可得最大值和最小值。
     * */
    return max - min;
}
