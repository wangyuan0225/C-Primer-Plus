/* 
第十一章  编程练习 16 
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 256
void print_orig(char* st);
void print_upper(char* st);
void print_lower(char* st);

int main(int argc, char *argv[]) {
    char c;
    if(argc < 2 ) {
        c = 'p';
    }
    c = argv[1][1];
    /* 无参数时按照参数p操作，其他参数取argv[][1],忽略命令行的'-'号
     * 需要时，也可以通过argv[][0]来判断'-'号是否正确输入。*/
    char test[SIZE];
    printf("Enter a string to convert:");
    fgets(test,SIZE,stdin);
    switch(c){
        case 'p':
        case 'P':
            print_orig(test);
            break;
        case 'u':
        case 'U':
            print_upper(test);
            break;
        case 'l':
        case 'L':
            print_lower(test);
            break;
    }
    return 0;
}
void print_orig(char* st){
    printf("The original text is:\n%s",st);
}
void print_upper(char* st){
    printf("The upper case text is:\n");
    while(*st!=EOF && *st!='\0'){
        putchar(toupper(*st++));
    }
    /* 处理转换的函数并未判断是否是小写，而是统一转化，这样省略了
     * if条件判断，当待转化字符大于不用转换字符时效率更高。*/
}
void print_lower(char* st){
    printf("The lower case text is:\n");
    while(*st!=EOF && *st!='\0'){
        putchar(tolower(*st++));
    }
}
