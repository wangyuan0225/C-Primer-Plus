/*
第十三章：编程练习5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);

int main(int argc, char* argv[])
{
    FILE *fa, *fs;          // fa 指向目标文件，fs 指向源文件
    int files = 0;         // 附加的文件数量
    char file_app[SLEN];  // 目标文件名
    char file_src[SLEN];  // 源文件名
    int ch;
    if(argc < 3)
    {
        fprintf(stderr,"Usage:%s dest_file src_file.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr,"Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create dest buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    /* 修改程序为命令行参数输入，如果命令行参数小于3，则缺少附加文件。*/
    files = argc - 2;
    /* 设置附加文件数为参数值 - 2 ，即减去程序文件名和源文件两个参数。*/
    while (files > 0)
    {
        if ((fs = fopen(argv[argc - files], "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", argv[argc - files]);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
                fprintf(stderr, "Error in reading file %s.\n", file_src);
            if (ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s.\n", file_app);
            fclose(fs);
            printf("File %s appended.\n", file_src);
            if(files > 0) printf("Next file %s:\n",argv[argc - (--files)]);
            else printf("No more file to appended.\n");
            /* 依次打开参数列表的下一个文件，并附加到源文件，直到参数列表最后一个参数。*/
        }
    }
    printf("Done appending, and %d files appended.\n", argc - 2);
    rewind(fa); printf("%s contents:\n", file_app);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("Done displaying.");
    fclose(fa);
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; // 只分配一次
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}

