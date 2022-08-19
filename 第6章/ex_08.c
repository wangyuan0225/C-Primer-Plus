/*
 * 第六章：编程练习 8
*/
#include <stdio.h>

int main(void){
    float x,y;
    printf("Please enter the two float data(seprate by blank): ");
    while(scanf("%f %f",&x,&y) == 2){
        /* scanf()函数的返回值是成功读取格式数据的个数，
         * 因此只有成功读取两个浮点型数据其返回值为 2 */
        printf("The answer is %f\n",(x-y)/(x*y));
        /* 程序不处理x 或者y 为0 的情况。如果有必要，可以自行添加条件判断语句*/
        printf("Please enter the two float data(seprate by blank): ");
    }
    printf("Program end!");
    return 0;
}
