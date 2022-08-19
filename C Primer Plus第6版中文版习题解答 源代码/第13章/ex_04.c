/*
第十三章：编程练习4
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp;
    char ch;
    for (int i = 0; i < argc - 1; i++)
    {
        if((fp = fopen(argv[i+1], "r")) != NULL)
        {
            printf("Now print file  %s:\n",argv[i+1]);
            while((ch = getc(fp)) != EOF)
            {
                putchar(ch);
            }
            /* 使用getc()函数顺序读取文件字符，并输出。此处也可以使用其他函数如
             * fgets()函数，fscanf()函数，但是需要注意函数在读取空白字符上的区别。*/
            printf("\n");
            fclose(fp);
        }
        else
        {
            printf("Open %s failed\n", argv[i]);
            exit(EXIT_FAILURE);
        }
    }
    printf("All done ,it is %d file printed.\n",argc-1);
    return 0;
}

