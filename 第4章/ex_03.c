/*
第四章：编程练习 3
*/
#include <stdio.h>
int main(void) {
    float input;
    printf("Enter a float number:");
    scanf("%f",&input);
    /* 读取用户输入的浮点数据。*/
    printf("The input is %.1f or %.1e \n",input,input);
    /* 转换符%f 和 %e 分别表示普通浮点数和科学计数法格式显示.
     * 如果不需要指定小数点位数和字符宽度，可以直接使用如下代码。
     * printf("The input is %f or %e \n",input,input);
     * printf("The input is %.3f or %.3e \n",input,input);
     * */
    return 0;
}

