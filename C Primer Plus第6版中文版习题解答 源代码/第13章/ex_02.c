/*
第十三章：编程练习2
*/

#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 512
/* 读写缓冲区长度，可以依据情况设置不同大小，通常
 * 可以依据磁盘的最小单元，设置为4k（4*1024），*/
int main(int argc, char* argv[])
{
    FILE *f_src, *f_dest;
    char buff[BUFFER_SIZE];
    if(argc != 3)
    {
        printf("Usage:%s src_file dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else
    {
        if((f_src = fopen(argv[1], "rb")) == NULL)
        {
            printf("Can't open %s.\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        if((f_dest = fopen(argv[2], "wb")) == NULL)
        {
            printf("Can't open %s.\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }
    size_t bytes;
    while((bytes = fread(buff,sizeof(char),BUFFER_SIZE,f_src)) > 0)
    {/* bytes为fread()成功读取的数据数量，类型为 size_t，保存至缓冲区。*/
        fwrite(buff,sizeof(char),bytes,f_dest);
        /* 写入缓冲区存储的数据，写入数据量为bytes。 */
    }
    fclose(f_src);
    fclose(f_dest);
    return 0;
}

