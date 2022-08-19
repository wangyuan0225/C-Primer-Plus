/*
第十三章：编程练习11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

int string_in(char* st, char* sub);

int main(int argc, char * argv[])
{
    FILE *fp;
    char buffer[SIZE];
    char* seek_string;
    if(argc < 3)
    {
        printf("Usage:%s string file_name ... \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    seek_string = argv[1];

    if((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can not open the file %s \n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(buffer, SIZE, fp) != NULL)
    {
        if(strstr(buffer, seek_string))
            /* 也可以使用自定义子串查找函数。
            if(string_in(buffer, seek_string))
            */
        {
            puts(buffer);
        }
    }
    return 0;
}
int string_in(char* st, char* sub){
    int count = 0;
    int src_len = strlen(sub);
    while(*st != '\0' && count < src_len){
        /* count表示子串中被匹配的字符数，循环入口为
         * 主串不为空、或者子串匹配完成 */
        if(*(st + count) == *(sub + count)){
            count++;
            /* 匹配到第一个字符后，主串指针并未后移，而是通过子串计数
             * 开始进行剩余字符的匹配检查。 */
        }else{
            count = 0;
            st++;
            /* 如果没有匹配到子串的字符，主串的指针后移。并清空子串计数。*/
        }
    }
    if(count == src_len) return 1;
    else return 0;
}

