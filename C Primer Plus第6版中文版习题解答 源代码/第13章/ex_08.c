/*
第十三章：编程练习8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv [])
{
    FILE *fp;
    int count = 0;
    int para_count = 1;
    char ch;
    if(argc < 2)
    {
        printf("Usage: %s character file_name_1 file_name_2 ... \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if(strlen(argv[1]) != 1)
    {
        printf("The second parameter should be a character\n");
        exit(EXIT_FAILURE);
    }
    /* 检查命令行参数。*/

    if(argc == 2)
    {
        printf("Now you can input the string:");
        while((ch = getchar()) != EOF ){
            if(ch == argv[1][0]) count++;
        }
        printf("There are %d character '%c' in your input\n", count, argv[1][0]);
    }/* 命令行参数未指定文件名，使用标准输入。*/
    else{
        while ( ++para_count  < argc)
        {
            count = 0;
            if((fp = fopen(argv[para_count], "r")) == NULL)
            {
                printf("Can not open the file %s.\n", argv[para_count]);
                continue;
                /* 文件打开错误，则开始下一个文件。*/
            }
            while((ch = getc(fp)) != EOF)
            {
                if(ch == argv[1][0]) count++;
            }
            printf("There are %d character '%c' in file %s.\n", count, argv[1][0], argv[para_count]);
            fclose(fp);
            /* 统计文件内的字符数据，完成后关闭文件指针。*/
        }
    }
    return 0;
}
