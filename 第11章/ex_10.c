/* 
第十一章  编程练习 10 
*/
#include <stdio.h>
#include <string.h>
#define SIZE 80

char* trim_str(char* st);

int main(int argc, char *argv[]) {
    char test_string[SIZE];

    char *p = NULL;
    printf("Enter a string (blank to quit.): ");
    fgets(test_string,SIZE,stdin);
    while(*test_string != '\n'){
        /* 输入空行结束循环 */
        p = trim_str(test_string);;
        printf("Done!\nNow the trim string is :");
        printf("%s\n",test_string);
        printf("Another? Enter a string (blank to quit.):");
        fgets(test_string,SIZE,stdin);
    };
    return 0;
}

char* trim_str(char* st){
    char* head = st;
    /* 分别使用st 和 head两个指针表示原串和删除串的两个位置。*/
    int count = 0;
    /* 记录删除的空格数量 */
    while(*st != '\0'){
        if(*st != ' ') {
            /* 原串不是空格，则两个指针均后移，并且从原复制到删除后。 */
            *head++ = *st++;
        }else{
            st++;
            count++;
            /* 原串字符有空格， 原串指针后移，删除后串指针不动，计数器加1。 */
        }
    }
    while(count--) *head++ = '\0';
    /* 删除空格后，末尾添加空字符，并清除剩余字符。*/
    return st;
}

