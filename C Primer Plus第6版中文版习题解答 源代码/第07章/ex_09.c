/*
第七章：编程练习 9
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int datum;
    do{
        printf("Enter a number( 0 to exit ):");
        scanf("%d",&datum);
        if(datum < 2){
            if(datum == 0) break;
            printf("%d is out of range, retry.\n",datum);
            continue;
        }
        /* 读取用户输入的正整数 */
        printf("You input %d, so the prime from %d to 2 is: ",datum,datum);
        for(int i = datum;i > 1;i--){
            /* 输入数据到2 的循环，循环判断区间内的每一个数是否素数*/
            int is_prime = 1;
            for(int j = 2;j <= i/2 ;j++){
                if(i%j == 0) {
                    is_prime = 0;
                    break;
                }/* 可以被1 或其本身之外的数整除，表示prime为 0 退出素数判别循环。*/
            }
            if(is_prime == 1)
                printf("%d, ",i);
            /* 依据素数标记 判别区间内数是否打印*/
        }
        printf("\n");
    }while(datum != 0);
    printf("Done! bye.\n");
    return 0;
}


