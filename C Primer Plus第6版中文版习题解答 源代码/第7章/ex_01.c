/*
第七章：编程练习 1
*/

#include <stdio.h>
int main(void)
{
    char ch;
    int blank = 0;
    int endline = 0;
    int others = 0;
    printf("Please input chars (# for exit):");
    while((ch = getchar())!= '#')
    {
        if (ch == ' ')
            blank++;
        /* 统计空格符号*/
        else if(ch == '\n')
            endline++;
        /* 统计换行符*/
        else others++;
        /* 最后else语句统计其余所有符号 */
    }
    printf("%d blank, %d endline, %d others\n",blank,endline,others);
    return 0;
}
