/*
第六章：编程练习 18
*/
#include <stdio.h>
#include <string.h>
int main(void){
    int rabnud = 5;
    int weeks = 1;
    while(rabnud < 150){
        printf("At %d weeks, Rabnud has %4d friends \n",weeks,rabnud);
        rabnud = 2*(rabnud-weeks++);
        /* 计算每周rabnud博士的朋友数*/
    };
    printf("\nDone!\n");
    return 0;
}
