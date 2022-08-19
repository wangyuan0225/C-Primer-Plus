/*
第十三章：编程练习13
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_data(int row, int col, int data[row][col], FILE* fp);
void write_data(int row, int col, int data[row][col], FILE* fp);
static const char convert[] = {' ', '.', '\'', '\"', '^', '*', '%', '$', '@', '#'};

int main(int argc, char * argv[])
{
    FILE *fin,*fout;
    int row = 20;
    int col = 30;
    int data[row][col];
    char file_input[] = "data";
    char file_output[] = "graphic";

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
    read_data(row, col, data, fin);
    write_data(row,col,data, fout);

    fclose(fin);
    fclose(fout);

    return 0;
}
void read_data(int row, int col, int data[row][col],FILE* fp){
    for(int i = 0; i < row; i++)
    {
        for(int j = 0;j < col; j++)
            fscanf(fp,"%d",&data[i][j]);
    }
}
void write_data(int row, int col, int data[row][col],FILE* fp){
    for(int i = 0; i < row; i++)
    {
        for(int j = 0;j < col; j++)
        {
            printf("%c",convert[data[i][j]]);
            fprintf(fp,"%c",convert[data[i][j]]);
        }
        printf("\n");
        fprintf(fp,"\n");
    }
}

