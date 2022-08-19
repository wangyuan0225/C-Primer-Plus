/*
第七章：编程练习 2
*/

#include <stdio.h>
int main(void)
{
    char ch;
    int counter = 0;
    printf("Please input chars (# for exit):");
    while((ch = getchar()) != '#')
    {
        if(counter++%8 == 0)
            printf("\n");
        /* 使用计数器，每八个字符打印一个换行符。注意：
         * 本行代码在counter为 0 时会首先打印一个换行符。
         * */
        if(ch == '\n')
            printf("'\\n'-%03d. ",ch);
        /* 标准输入的换行符需要转换显示方式，否则会可能会在
         * 不足八个字符时就产生产生换行。
         * */
        else if(ch == '\t')
            printf("'\\t'-%03d. ",ch);
            /* 标准输入的制表符需要转换显示方式 * */
        else printf("'%c'-%03d. ",ch,ch);
         /* 其他字符通过打印原字符和十进制数 */
    }
    printf("Done\n");
    return 0;
}
