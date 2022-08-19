/*
 * 第五章：编程练习 5
 * */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0, sum = 0;
    printf("Enter the number of days you work:");
    scanf("%d",&count);
    /* 读取用户输入天数 */
    while(count > 0){
        sum = sum + count--;
    }
    /* 通过递减运算，控制循环，计算工资总和。 */
    printf("You earned $ %d total!\n",sum);
    printf("PROGRAM EXIT!\n");
    return 0;
}
