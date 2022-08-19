/*
第九章：编程练习 3
*/
#include <stdio.h>
void  print_char(char ch, int cols, int rows);
/*函数声明，无返回值，三个参数分别是 char, int, int
 * 第一个整数表示行内字符数，即列，第二个参数为行数
 * 这一点需要对比编程练习2。*/
int main(void) {
    char c;
    int i, j;
    printf("Enter the char you want to print: ");
    scanf("%c",&c);
    printf("Enter the rows and cols you want to print: ");
    scanf("%d %d",&i,&j);
    /*scanf()函数读入顺序为行、列，对应i——行，j——列*/
    print_char(c,j,i);
    return 0;
}

void  print_char(char ch, int cols, int rows){
    for(int m = 0;m < rows ;m++){
        for(int n = 0;n < cols; n++)
            printf("%c",ch);
        printf("\n");
    }
}
