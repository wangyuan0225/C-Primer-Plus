/*
第七章：编程练习 3
*/

#include <stdio.h>
int main(void)
{
    int odd_sum = 0;
    int even_sum = 0;
    int odd_count = 0;
    int even_count = 0;
    int input = 0;
    /* 定义变量分别对奇数和偶数进行计数和求和。*/
    printf("Please input numbers(0 for exit):");
    while(scanf("%d",&input))
    {
        if (input == 0) break;
        if (input%2 == 0){
            even_sum = even_sum + input;
            /* 使用+= 运算符： even_sum += input; */
            even_count++;
        }else{
            odd_sum = odd_sum + input;
            /* 使用+= 运算符：odd_sum += input; */
            odd_count++;
        }
    }
    printf("Have %d even number, average is %g\n",even_count,1.0*even_sum/even_count);
    /* 平均数应当以浮点型数据显示，因此先乘以1.0，1.0*even_sum 将结果隐性转换为浮点型数据 */
    printf("Have %d odd number, average is %g\n",odd_count,1.0*odd_sum/odd_count);
    printf("Done\n");
    return 0;
}
