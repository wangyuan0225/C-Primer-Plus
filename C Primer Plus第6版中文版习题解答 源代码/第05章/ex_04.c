/*
 * 第五章：编程练习 4
 * */
#include <stdio.h>
#define  FEET_TO_CM 30.48 
#define  INCH_TO_CM 2.54 
/* 预定义转换单位明示常量 */

int main(int argc, char *argv[]) {
    int feet;
    float inches, cm;
    printf("CONVERT CM TO INCHES!\n");
    printf("Enter the height in centimeters:");
    scanf("%f",&cm);
    /* 读取用户输入数据 */
    while(cm > 0){
        feet = cm/FEET_TO_CM;
        inches = (cm - feet*FEET_TO_CM)/INCH_TO_CM;
        /* 数据转换计算 */
        printf(" %.1f cm = %d feet , %.1f inches\n",cm,feet,inches);
        /* 打印计算结果 */
        printf("Enter the height in centimeters( <=0 TO QUIT ):");
        scanf("%f",&cm);
        /* 循环读取用户输入 */
    }
    printf("PROGRAM EXIT!\n");
    return 0;
}

