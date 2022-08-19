/*
第三章：编程练习 1
*/
#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void) {
    int big_int = 2147483647;
    /* 有符号整型数据最大值2的31次方减1 */
    float big_float = 3.4e38;
    /* 浮点型数据的最大值一般为3.4E38 */
    float small_float = 10.0/3;
    /* 浮点数据的有效位数，为 6 位 */
    printf("The big int data is %d\n",big_int+1);
    /* 整型数据最大值加 1 ，会产生越界，结果为 -2147483648 */
    printf("The big float data is %f\n",big_float*10);
    /* 浮点型最大数据乘10 产生越界，输出 inf。如果浮点数据只是加一个
     * 小数据，由于其精确度限制，不会产生越界效果。 */
    printf("The big float data is %f\n",small_float);
    /* 打印结果3.333333,精度损失。*/
    printf("The MAX float data is %f\n",FLT_MAX);
    /* 打印结果：340282346638528859811704183484516925440.000000 */
    printf("The MAX int data is %d\n",INT_MAX);
    /* 打印结果：2147483647 */
    return 0;
}
