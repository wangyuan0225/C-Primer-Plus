/* 
第十一章  编程练习 2 
*/
#include <stdio.h>
#define SIZE 40
char * read_char(char *st,int n);

int main(int argc, char *argv[]){
    char test[SIZE];
    puts("Start to test function. Enter a string.");
    read_char(test, SIZE);
    puts("The string you input is:");
    puts(test);
    /* 打印显示数组的输入结果，也可以使用循环显示数组元素形式，
     * 某些情况下显示结果不同。 */
    return 0;
}

char * read_char(char *st, int n){
    int i = 0;
    do{
        st[i] = getchar();
        if(st[i] == '\n' || st[i] == '\t' || st[i] == ' ')
            break;
        /* 遇到第一个空白即退出循环。该空白还存储在数组中未替换处理
         * 输入缓冲区其他数据未做处理，仅在st内存第一个空白之前的字符*/
    }while(st[i] != EOF && ++i < n);
    /* 读取用户输入的字符，直到输入EOF或者到输入界限。
     * 此处也可以使用指针形式进行操作，例如：
     * *(st + i) = getchar();
     * */
    return st;
}

