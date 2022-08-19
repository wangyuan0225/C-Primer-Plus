/*
第十三章：编程练习9
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int get_number(FILE *);
int main(void)
{
    FILE *fp;
    char words[MAX];
    int count = 1;
    
    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    count = get_number(fp);
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%d.%s\n", ++count,words);
    /* 修改frpint()函数，添加行号。程序并未修改wordt文件之前的行号。*/
    
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");
    return 0;
}
int get_number(FILE * fp){
    /* 单词保存时每一个单词为一行，因此使用fgets()函数读取到文件末尾并计数。*/
    int i = 0;
    char temp[MAX];
    rewind(fp);
    while(fgets(temp,MAX,fp) != NULL) i++;
    return i;
}

