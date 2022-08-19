/*
第八章：编程练习 2
*/

#include <stdio.h>

int main(void) {
    int counter = 0;
    char ch;
    while((ch=getchar())!= EOF){
        if(counter++ == 10){
            printf("\n");
            counter = 1;
        }/*输入计数器，并判断打印换行符号 */
        if(ch >= '\040'){
            printf(" \'%c\'--%3d ",ch,ch);
            /*大于空格字符的可显示为字符的处理和判断*/
        }else if(ch == '\n'){
            printf(" \\n--\\n\n ");
            counter = 0;
            /*换行符号的处理，需换行，计数器重置*/
        }else if(ch == '\t'){
            printf(" \\t--\\t ");
            /*制表符的处理*/
        }else{
            printf(" \'%c\'--^%c ",ch,(ch+64));
            /*其他非显示字符的处理*/
        }
    }
    return 0;
}

