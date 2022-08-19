/*
 * 第五章：编程练习 8
 * */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int first, second;
    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand:");
    scanf("%d",&second);
    /* 用户输入second数据保持不变 */
    printf("Now enter the first operand:");
    scanf("%d",&first);
    /* 分别读取用户输入数据 */
    while(first > 0){
        printf("%d %% %d is %d\n",first,second,(first%second));
        printf("Enter next number for first operand( <= 0 to quit):");
        scanf("%d",&first);
    }
    /* 循环读取用户输入、计算并打印结果。 */
    printf("Done!\n");
    return 0;
}
