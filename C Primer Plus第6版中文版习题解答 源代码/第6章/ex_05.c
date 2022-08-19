/*
第六章：编程练习 5
*/
#include <stdio.h>
int main(void){
    int i ,j,num;
    char c ;
    printf("Enter the core char you want to print(A...Z):");
    scanf("%c",&c);
    char ch = 'A';
    num = c - 'A' + 1;
    /* 输入字符的ASCII码减去 'A' 加 1的到十进制结果 num 
     * num即是需要打印的从 A 开始的字符数，也是打印的总行数 */
    for (i = 1; i <= num ; i++){
        /* 外部循环控制打印行数， num 为输入字符和 A 的差加 1* */
        for (j = 0; j < num - i ; j++)
            printf(" ");
        /* 打印空格，空格数为总字符数减去当前行应打印的字符数。
         * 即，本行应打印空格数 + 应打印字符数 = 总字符数（总行数）*/
        for (ch ='A'; j < num ; j++)
            printf("%c",ch++);
        /* 打印正序字符数，需要ch做递增操作，起始值 j 在空格处已经通过循环
         * 做了初始化，因此，只打印剩余字符数。 */
        for (j = 1, ch-=2; j < i  ; j++,ch--)
            printf("%c",ch);
        /* 打印逆序字符，字符做递减操作。*/
        printf("\n");
    }
    return 0;
}
