/*
第十三章：编程练习12
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define row 20
#define col 30

int main(int argc, char * argv[])
{
    FILE *fin,*fout;
    int data[row][col];
    char file_input[] = "data";
    char file_output[] = "graphic";

    char convert[] = {' ', '.', '\'', '\"', '^', '*', '%', '$', '@', '#'};
    if((fin = fopen(file_input, "r")) == NULL)
    {
        printf("Can not open file %s.\n", file_input);
        exit(EXIT_FAILURE);
    }
    if((fout = fopen(file_output, "w")) == NULL)
    {
        printf("Can not open file %s.\n", file_output);
        exit(EXIT_FAILURE);
    }
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0;j < col; j++)
            fscanf(fin,"%d",&data[i][j]);
        /* 调用fscanf()函数，按照整型数据转换数据，写入data数组*/
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0;j < col; j++)
        {
            printf("%c",convert[data[i][j]]);
            fprintf(fout,"%c",convert[data[i][j]]);
        }
        printf("\n");
        fprintf(fout,"\n");
    }/* 应用convert[]数组进行整型数据到符号的转换，并存入相应的文件*/

/* 如果不使用二维整型数组和fscanf()自动数据转换，也可以使用fgets()并手动将字符
 * 转换成为整型数据，操作过程略微复杂。
 *  char line[61];
   while( fgets(line,61*sizeof(char),fin) != NULL)
   {
      for (int i = 0; i <= 61; i++) {
         if(line[i]>=48&&line[i]<=57){
            printf("%c",convert[line[i] - 48]);
            fprintf(fout,"%c",convert[line[i] - 48]);
         }
      }
      printf("\n");
      fprintf(fout,"\n");
   }
*/
    fclose(fin);
    fclose(fout);

    return 0;
}

