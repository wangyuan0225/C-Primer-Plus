/* 
第十一章  编程练习 14 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 3){
        printf("Error argument. please retry.\n");
        return 0;
    }
    /* 计算一个double类型的整数次幂，需要2个参数，argc应为3 */
    float f = atof(argv[1]);
    int i = atoi(argv[2]);
    /* 使用字符串转整数和浮点数据的函数atof()和atoi()，*/
    float result = 1;
    for(int k = 0;k < i;k++){
        result = result*f;
    }
    /* 循环乘法 计算整数次幂 */
    printf("The %g 's %d power is %g\n",f,i,result);
    return 0;
}
