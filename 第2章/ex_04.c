/*
第二章：编程练习 3
*/
#include <stdio.h>

int jolly(void);
int deny(void);
/* 函数声明 */
int main(void) {
    jolly();
    jolly();
    jolly();
    deny();
/* 函数调用 */
    return 0;
}
int jolly(void){
/* 函数定义 */
    printf("For he's a jolly good fellow!\n");
    return 0;
}
int deny(void){
/* 函数定义 */
    printf("Which nobody can deny!\n");
    return 0;
}
