/*  
 * 第五章：编程练习 3
 * */
#include <stdio.h>
#define WEEK_PER_DAY 7 // 每周7天
int main(int argc, char *argv[]) {
    int days, weeks, input;

    printf("CONVERT DAYS TO WEEKS!\n");
    printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
    scanf("%d",&input);
    /* 读取用户输入，保存至input 变量 */
    while(input > 0){
        weeks = input/WEEK_PER_DAY;
        /* 计算周数 */
        days = input%WEEK_PER_DAY;
        /* 计算不足一周的天数 */
        printf("%d days are %d weeks, %d days\n",input,weeks,days);
        /* 打印输出结果 */
        printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
        scanf("%d",&input);
        /* 继续下一次输入 */
    }
    printf("PROGRAM EXIT!\n");
    return 0;
}

