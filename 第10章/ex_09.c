/*
第十章：编程练习 9
*/
#include <stdio.h>
void copy_array(int n, int m, double target[n][m], const double source[n][m]);
void show_array(int n, int m, const double array[n][m]);
/*变长数组作为函数的参数，需要传递二维函数的数组下标作为形式参数，且形式参数的数组
 * 也需要使用相同的形式参数名作为下标来标识出数组的长度。
 * 即：（int n, int m, const double array[n][m]）关键字const保护源数组在函数内
 * 不会被误操作修改数组元素。
 * */
int main(void) {
    int n = 3;
    int m = 5;
    double target[n][m],source[][5] = {
            {0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4},
            {9.1, 8.5, 2.3, 6.1, 8.4},
    };
    copy_array(n, m, target, source);
    show_array(n, m, target);
    return 0;
}

void copy_array(int n, int m, double target[n][m],const double source[n][m]){
    for(int i = 0; i < n; i++)
        for(int j = 0;j < m; j++)
            target[i][j] = source[i][j];
}
/*使用嵌套循环来循环复制，内部循环复制行，外部循环实现多列的数据复制，形式参数n，m
即表示二维数组行动下标，可以直接表示数组的循环终止条件
 * */
void show_array(int n, int m, const double array[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0;j < m; j++)
            printf("%g ",array[i][j]);
        printf("\n");
    }
}
