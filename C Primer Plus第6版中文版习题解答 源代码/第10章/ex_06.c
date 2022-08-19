/*
第十章：编程练习 6
*/
#include <stdio.h>

void r_sort(double number[], int n);
/*传统方式传递数组参数。
 * */
int main(void) {
    double source[12] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};
    for(int i = 0;i < 12 ;i++) printf("%g ",source[i]);
    printf("\n");
    r_sort(source, 12);
    for(int i = 0;i < 12 ;i++) printf("%g ",source[i]);
    return 0;
}
void r_sort(double number[], int n){
    /*排序算法使用常用的比较排序算法，即，判断相邻元素的大小关系，
     * 并对需要排序的两个元素交换其位置，内部循环一遍能保证一个元素
     * 调整到合适位置，外部循环n-1次保证所有元素都能够交换到正确位置
     * */
    double temp;
    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0; j < n - 1 -i ; j++){
            /*循环判断条件设置为j < n - 1也可，只是会多执行一些无效的循环判断
             * 具体产生原因是每次循环可以保证一个元素到达正确位置，该位置后续排序
             * 过程可以忽略，以提高效率。
             * */
            if(number[j] < number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        /*由于习题主要目的并非是排序算法，但可以通过在此处打印
         * 每次循环的排序结果，帮助理解交换排序的基本思想。
         * */
        }
    }
}

