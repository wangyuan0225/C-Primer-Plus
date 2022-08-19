/*
第四章：编程练习 7
*/

#include <stdio.h>
#include <float.h>
int main(void){
    double d_third = 1.0/3.0;
    float f_third = 1.0/3.0;
    printf("float of one third(6) = %.6f\n",f_third);
    /* float 类型，6位有效数字*/
    printf("float of one third(12) = %.12f\n",f_third);
    /* float 类型，12位有效数字*/
    printf("float of one third(16) = %.16f\n",f_third);
    /* float 类型，16位有效数字*/
    printf("double of one third(6) = %.6lf\n",d_third);
    /* double 类型，6位有效数字 lf转换说明 */
    printf("double of one third(12) = %.12lf\n",d_third);
    /* double 类型，12位有效数字 lf转换说明 */
    printf("double of one third(16) = %.16lf\n",d_third);
    /* double 类型，16位有效数字 lf转换说明 */
    printf("FLT_DIG in float.h is %d\n",FLT_DIG);
    /* float类型精度 */
    printf("DBL_DIG in float.h is %d\n",DBL_DIG);
    /* double类型精度 */

    return 0;
}
