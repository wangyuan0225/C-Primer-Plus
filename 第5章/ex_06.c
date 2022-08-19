/*
 * 第五章：编程练习 6
 * */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0, sum = 0;
    printf("Enter the number of days you work:");
    scanf("%d",&count);
    /* 读取用户输入天数数据 */
    while(count > 0){
        sum = sum + count * count;
        count--;
    }
    /* 通过天数递减控制循环 ，工资使用count*count转换成为平方 */
    printf("You earned $ %d total!\n",sum);
    printf("PROGRAM EXIT!\n");
    return 0;
}
