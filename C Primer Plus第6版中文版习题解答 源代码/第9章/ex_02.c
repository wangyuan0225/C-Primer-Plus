/*
第九章：编程练习 2
*/
#include <stdio.h>
void chline(char ch,int cols, int rows);
/* 函数声明，无返回值，三个参数分别是char, int, int。
 * chline(ch,i,j)题目要求j行，i列，因此需要注意形式参数顺序和含义。
 * */
int main(void) {
    char c;
    int i, j;
    printf("Enter the char you want to print: ");
    scanf("%c",&c);
    printf("Enter the rows and cols you want to print: ");
    /* 变量j 负责打印行，i 负责打印列，scanf()函数读取输入顺序为&j,&i*/
    scanf("%d %d",&j,&i);
    chline(c,i,j);
    return 0;
}

void chline(char ch,int cols, int rows){
    for(int m = 0;m < rows ;m++){
        for(int n = 0;n < cols; n++)
            printf("%c",ch);
        printf("\n");
    }
}
/* 循环嵌套时，外部循环控制行数，内部循环控制列。
 * 外部循环的循环控制判断使用形式参数rows，并负责打印换行符。
 * 内部循环控制判断使用形式参数 cols,并打印字符，无换行。
 * */
