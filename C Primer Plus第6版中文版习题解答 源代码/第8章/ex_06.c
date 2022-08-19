/*
第八章：编程练习 6
*/

#include <stdio.h>
char get_first(void);
/*函数声明，返回值类型为字符类型*/
int main(void) {
    char ch;

    ch = get_first();
    printf("%c\n",ch);
}

char get_first(void){
    char ch;
    do{
        ch = getchar();
    }while(ch == ' '||ch == '\n' ||ch == '\t');
    /*通过do while循环来读取标注输入，如果为三种空白字符中的一种则再次
     * 读取下一个字符，知道非空才返回ch。
     * */
    return ch;
}