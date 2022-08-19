/*
第九章：编程练习 7
*/
#include <stdio.h>
void get_char_pos(void);
/*函数功能：读取标准输入，对于字符输入，打印其字母表位置。*/
int position(char ch);
/* 函数功能：计算并返回字符在字母表中位置。*/
int main(void) {
    get_char_pos();
}

void get_char_pos(void){
    char ch;
    printf("Enter the chars(ended by EOF ,not enter):");
    while((ch = getchar()) != EOF){
        /*以文件结尾为结束标志*/
        if((ch = getchar()) == '\n') continue;
        /*简单清除换行符的输入，其他特殊符号未处理*/
        if(position(ch) != -1){
            printf("The char %c's position in alphabet is %d.\n",ch,position(ch));
        }else printf("%c is not a alphabet.\n",ch);
    }
}

int position(char ch){
    if(ch >='A' && ch <='Z')
        return ch -'A' + 1;
    if(ch >='a' && ch <='z')
        return ch -'a' + 1;
    return -1;
}
/*函数将参数传递的字符分别和'a' 'A' 比较判断其位置，非字符返回 -1。
 * */

