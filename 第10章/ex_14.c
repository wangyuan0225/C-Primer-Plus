/*
第十章：编程练习 14
*/
#include <stdio.h>

void input_array(int rows,int cols, double arr[rows][cols]);
double col_average(int cols, const double arr[cols]);
double array_average(int rows,int cols, const double arr[rows][cols]);
double array_max_number(int rows,int cols, const double arr[rows][cols]);
void show_result(int rows,int cols, const double arr[rows][cols]);
/*函数的参数定义使用变长数组形式实现。数组的输入函数将会修改数组的元素值，因此不能够
 * 使用const关键词，其他函数应当使用const来保护实际参数不被误操作修改。
 * 如函数名所示，函数实现功能分别是题目要求的a,b,c,d,e。*/

int main(void) {
    int rows = 3;
    int cols = 5;
    double array[rows][cols];
    input_array(rows,cols,array);
    show_result(rows,cols,array);
    return 0;
}
void input_array(int rows,int cols, double arr[rows][cols]){
    printf("Enter the array number.\n");
    for(int i = 0; i < rows;i++){
        printf("Enter five double number seprate by enter:\n");
        for(int j = 0; j < cols; j++)
            scanf("%lf",&arr[i][j]);
    }
}
double col_average(int cols, const double arr[cols]){
    double sum = 0;
    for(int i = 0;i< cols; i++)
        sum += arr[i];
    return sum/cols;
}

double array_average(int rows,int cols, const double arr[rows][cols]){
    double sum = 0;
    for(int i = 0;i< rows; i++)
        sum += col_average(cols, arr[i]);
    return sum / rows;
}

double array_max_number(int rows,int cols, const double arr[rows][cols]){
    double max = arr[0][0];
    for(int i = 0;i < rows ;i++)
        for(int j = 0;j < cols; j++)
            if(max < arr[i][j]) max = arr[i][j];
    return max;
}
void show_result(int rows,int cols, const double arr[rows][cols]){
    printf("Now, Let\'s check the array!\n");
    printf("The array you input is:\n");
    for(int i = 0 ;i < rows; i++){
        for(int j = 0; j< cols ;j++)
            printf("%5g",arr[i][j]);
        printf("\n");
    }
    printf("The Average of every column is:\n");
    for(int i = 0; i < rows;i++)
        printf("The %d column's average is %g .\n",i,col_average(cols, arr[i]));

    printf("The array's data average is %g \n",array_average(rows,cols, arr));
    printf("The max datum in the array is %g",array_max_number(rows,cols, arr));
}

