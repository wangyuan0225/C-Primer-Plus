/*
第十章：编程练习 7
*/
#include <stdio.h>
#define ROWS 12
#define COLS 5
void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t,double *s_first, double *s_last);
/*编程练习2的一维数组拷贝函数声明*/
void copy_2d_array(double t[][ROWS],double s[][ROWS],int n);
void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n);
/*二维数组的复制函数声明，只使用了指针和数组作为形式参数，，首、尾指针作为参数
 * 的形式类似，略。
 * */
int main(void) {
    double target[COLS][ROWS],source[COLS][ROWS] = {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    copy_2d_ptr(target,source,COLS);
    for(int i = 0;i<COLS;i++) {
        for (int j = 0 ;j < ROWS; j++)
            printf("%5.2f", target[i][j]);
        printf("\n");
    }
    return 0;
}

void copy_arr(double t[], double s[], int n){
    for(int i = 0 ;i < n ;i++)
        t[i] = s[i];
}
void copy_ptr(double *t, double *s, int n){
    for(int i = 0 ;i < n ;i++)
        *(t+i) = *(s+i);
}
void copy_ptrs(double *t,double *s_first, double *s_last){
    for(int i = 0; (s_last - s_first) > i ;i++)
        //for(int i = 0; (s_last - s_first) > 0 ;i++, s_first++)
        *(t+i) = *(s_first+i);
}
/*编程练习2的三个一维数组拷贝函数实现*/

void copy_2d_array(double t[][ROWS],double s[][ROWS],int n){
    //参数n表示cols，
    for(int i = 0;i < n; i++)
        copy_arr(t[i],s[i],ROWS);
}
/*二维数组作为型形式参数，参数列表内可以省略主数组的元素数，但是其他子数组元素数不能省略。
 * 原一维数组的复制函数能够复制二维数组的一行，所以通过循环，逐行复制，参数的调用中需要注意
 * 行、列的数在函数内的所使用的变量名，n表示 COLS
 * */
void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n){
    for(int i = 0;i < n; i++)
        copy_ptr(*(t+i),*(s+i),ROWS);
}
/*指向二维数组的指针作为型形式参数，参数列表内需标示指针指向数组的元素数。
 * 原一维数组的复制函数能够复制二维数组的一行，所以通过循环，逐行复制。
 * 参数的调用中需要注意行、列的数在函数内的所使用的变量名，n表示 COLS
 * */

