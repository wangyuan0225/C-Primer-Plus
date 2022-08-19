/*
第十三章：编程练习10
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

int main(void)
{
    FILE *fp;
    char file_name[40];
    long position;
    char buffer[SIZE];

    printf("Input a filename:");
    scanf("%s", file_name);
    if((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Can not open %s.\n",file_name);
        exit(EXIT_FAILURE);
    }
    printf("Input the position to read (q or -1 to quit):");
    while(scanf("%ld", &position) == 1 && position >= 0)
    {
        fseek(fp, position, SEEK_SET);
        /* 调用fseek()函数，进行文件定位。*/
        if(fgets(buffer,SIZE,fp) != NULL)
        {
            printf("Content is : %s",buffer);
        }
        /* 读取当前位置到行末的数据，并打印。*/
        printf("Input the position to read (q or -1 to quit):");
    }
    fclose(fp);
    return 0;
}
