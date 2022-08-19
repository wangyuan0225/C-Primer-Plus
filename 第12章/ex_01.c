/*
第十二章：编程练习 1
*/

#include <stdio.h>

void critic(int* n);
/* 通过参数将原units数据传递给函数 */
int main(int argc, char *argv[]) {
    int units;
    /* units定义成为 main()函数内块作用域的变量 */
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units != 56)
        critic(&units);
    printf("You must have looked it up!\n");
    return 0;
}
void critic(int* n){
    printf("No lucky, my friends. Try again.\n");
    scanf("%d",n);
}
