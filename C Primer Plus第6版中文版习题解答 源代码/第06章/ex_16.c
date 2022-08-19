/*
第六章：编程练习 16
*/
#include <stdio.h>
#include <string.h>
int main(void){
    float daphne,deirdre;
    daphne = deirdre = 100.0;
    int year = 0;
    do{
        daphne = daphne + 100*0.1;
        deirdre = deirdre + deirdre*0.05;
        year++;
        /* 计算两人的每年利息及原始投资的总和*/
    }while((deirdre - daphne) < 0);
    /* daphne高于deirdre 退出循环*/
    printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n",year,daphne,deirdre);
    printf("\nDone!\n");
    return 0;
}
