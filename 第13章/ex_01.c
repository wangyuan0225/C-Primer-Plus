/*
第十三章：编程练习1
*/

#include <stdio.h>
#include <stdlib.h>  // 提供 exit()的原型
int main(int argc, char *argv[])
{
    int ch;     // 读取文件时，储存每个字符的地方
    FILE *fp;   // “文件指针”
    unsigned long count = 0;
    char file_name[50];
    printf("Input the filename:");
    scanf("%s",filename);
    /* 通过scanf()函数读取用户输入，并将输入保存至filename中。*/
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open %s\n", a);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout); // 与 putchar(ch);相同
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", a, count);
    return 0;
}

