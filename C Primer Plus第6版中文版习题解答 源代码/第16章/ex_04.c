/*
第十六章：编程练习 4
*/

#include <stdio.h>
#include <time.h>

void delay(double second);
int main(void){
    double input;
    printf("Enter a second to delay.");
    scanf("%lf", &input);
    delay(input);
}
void delay(double second){
    clock_t start = clock();
    /* 取得初始的处理器时间 */
    printf("Now let's test %f second delay \n",second);
    clock_t now = clock();
    /* 取得延迟后的处理器时间 */
    while(((double)(now - start))/CLOCKS_PER_SEC < second){
        now = clock();
        printf("You delay  %f second.\n",((double)(now - start))/CLOCKS_PER_SEC);
        /* 判断时间是否达到参数值，需要注意的是，当前的delay()函数
         * 占用cpu时间进行循环判断。C语言中还有其他相应的延迟等待函数可以使用。*/
    }
}

