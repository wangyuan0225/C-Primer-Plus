/*
第十三章：编程练习3
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    FILE *fp;
    char file_name[80];
    char ch;
    printf("Input the filename:");
    scanf("%s",file_name);

    if((fp = fopen(file_name, "r+")) == NULL)
    {
        printf("Can't open file %s.\n", file_name);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF)
        /* 读取一个字符，保存至ch变量。*/
    {
        fseek(fp,-sizeof(char),SEEK_CUR);
        /* 调用fseek函数将文件指针后移一个字符。*/
        putc(toupper(ch), fp);
        /* 写入转换后字符，覆盖原字符。*/
    }
    fclose(fp);
    return 0;
}

