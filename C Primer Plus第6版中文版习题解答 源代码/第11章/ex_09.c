/* 
第十一章  编程练习 9 
*/
#include <stdio.h>
#include <string.h>
#define SIZE 80

char* invert_str(char* st);

int main(int argc, char *argv[]) {
    char test_string[SIZE];
    char *p = NULL;
    printf("Enter a string (enter to quit.): ");
    fgets(test_string,SIZE,stdin);
    while(*test_string != '\n'){
        /* 循环读取待逆序字符串。直到直接输入回车。 */
        p = invert_str(test_string);
        printf("Done!\nNow the invert string is :");
        printf("%s\n",test_string);
        printf("Another? Enter a string (enter to quit.):");
        fgets(test_string,SIZE,stdin);
    };
}

char* invert_str(char* st){
    /* 函数使用了临时字符串来存储翻转字符串，需要有临时存储空间
     * 也可以使用字符串首尾字符互换的方式进行反转，这时需要两个
     * 下标索引分别进行首尾字符查找。 */
    int length = strlen(st);
    /* 获取源字符串的长度 */
    char invert[length];
    /* 创建逆序字符串的临时存储区域。 */
    for(int i = 0; i < length ;i++)
        *(invert + i) =  *(st + length -1 - i);
    /* 逆序翻转字符串，存储入临时字符串。 */
    for(int i = 0; i < length ;i++)
        *(st + i) =  *(invert + i);
    /* 临时串转换到源字符串，覆盖源字符串，可以直接使用strcpy()函数 */
    return st;
}

