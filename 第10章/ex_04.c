/*
第十章：编程练习 4
*/
#include <stdio.h>

int get_max_index(double number[], int n);
/*使用传统方式参数传递，n表示数组number长度。
 * */
int main(void) {
    double source[100] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};
    printf("The largest number's index in array is %d ",get_max_index(source, 100));
    return 0;
}
int get_max_index(double number[], int n){
    double max = number[0];
    int index = 0;
    for(int i = 0; i < n; i++){
        if(max < number[i]) {
            max = number[i];
            index = i;
        }
    }
    /*函数在遍历比较数组元素时，同时需要保存元素数值和下标，元素值用于下一次比较
     * 下标值需要保存并且在函数末尾返回用途。
     * */
    return index;
}
