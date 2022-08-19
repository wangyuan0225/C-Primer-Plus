/*
第六章：编程练习 12
*/
#include <stdio.h>
int main(void){
    int length;
    double sum = 0.0;
    printf("Enter the limit length: ");
    scanf("%d",&length);
    while(length>0){
        sum = 0.0;
        for(int i = 1;i <= length; i++){
            sum = sum + 1.0/i;
        }
        /* 计算 1 + 1/2 + 1/3 …… */
        printf("The sum for 1.0 +...+ 1.0/%d.0 is %lf\n",length,sum);
        sum = 0.0;
        for(int i = 1;i <= length; i++){
            if(i%2==0) sum = sum - 1.0/i;
            else sum = sum + 1.0/i;
        }
        /* 计算 1 - 1/2 + 1/3 - 1/4 ……*/
        printf("The sum for 1.0 -...+ 1.0/%d.0 is %lf\n",length,sum);

        sum = 0.0;
        for(int i = 1;i <= length; i++){
            if(i%2 != 0) sum = sum + 2*1.0/i;
        }/* 两个数列和，只计算奇数项，偶数项相抵消。*/
        printf("The sum for 1.0 + 1.0+ 2.0/3.0+...+ 2.0/%d.0 is %lf\n",length,sum);

        printf("Enter the limit length: ");
        scanf("%d",&length);
    }
    printf("\nDone!\n");
    return 0;
}
