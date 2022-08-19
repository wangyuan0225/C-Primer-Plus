/*
第二章：编程练习 1
*/
#include <stdio.h>
#define NAME "Gustav"
#define SURNAME "Mahler"
/*
可以自定义自己的 姓，名分
*/
int main(void) {

    printf("%s %s\n",NAME,SURNAME);
    printf("%s\n%s\n",NAME,SURNAME);
    printf("%s ",NAME);
    printf("%s\n",SURNAME);

    return 0;
}
