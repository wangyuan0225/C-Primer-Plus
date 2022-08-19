/*
第五章：编程练习 1
*/
#include <stdio.h>
#define MIN_PER_HOU 60 // 每小时60分钟
int main(int argc, char *argv[]) {
    int hours, minutes, input;
    /*  定义 MIN_PER_HOU const 常量；
     * const int  MIN_PER_HOU = 60;  
     */
    printf("CONVERT MINUTES TO HOURS!\n");
    printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
    scanf("%d",&input);
    while(input >0){
        hours = input/MIN_PER_HOU;
        minutes = input%MIN_PER_HOU;
        printf("CONVERT TO %d HOUR AND %d MINUTES\n",hours,minutes);
        /* 程序设计中也经常使用以下方法计算，从而减少变量hours和minutes的定义和使用；
         * printf("CONVERT TO %d HOUR AND %d MINUTES\n",input/MIN_PER_HOU,input%MIN_PER_HOU);
         */
        printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
        scanf("%d",&input);
    }
    printf("PROGRAM EXIT!\n");
}
