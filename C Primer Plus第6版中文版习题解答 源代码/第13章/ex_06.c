/*
第十三章：编程练习6
*/

#include <stdio.h>
#include <stdlib.h>  // 提供 exit()的原型
#include <string.h>  // 提供 strcpy()、strcat()的原型
#define LEN 40
int main(int argc, char *argv [])
{
    FILE *in, *out;  // 声明两个指向 FILE 的指针
    int ch;
    char name[LEN];  // 储存输出文件名
    int count = 0;
    char input[LEN];

    printf("Input the file name:");
    scanf("%s",input);
    /* 将命令行参数的条件语句删除，读取用户的输入文件名 */
    if ((in = fopen(input, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", input);
        exit(EXIT_FAILURE);
    } /* 设置以读模式打开输入文件 */
    
    strncpy(name, input, LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");  
    /* 设置完成输出文件的文件名，并以写模式打开该文件*/
    if ((out = fopen(name, "w")) == NULL)
    {          
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    } 
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
        /* 打印3个字符中的第1个字符*/
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");
    return 0;
}
