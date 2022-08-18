/*
第四章：编程练习 6
*/
#include <stdio.h>
int main(void){
    char name[40],surname[40];
    int wname, wsurname;
    printf("Please input your first name:");
    scanf("%s",name);
    printf("Please input your last name:");
    scanf("%s",surname);
    /* 通过scanf()函数分别读取用户姓名。*/
    wname = printf("%s",name);
    printf(" ");
    wsurname = printf("%s",surname);
    /* 分别打印用户姓名，通过返回值记录其字符数量。*/
    printf("\n%*d %*d",wname,wname,wsurname,wsurname);
    /* 打印其字符数量，由于数量不确定，因此使用*号修饰符和参数的形式。
     * 如果使用strlen()函数，则可以不用定义wname,wsurname变量，
     * 直接使用以下代码：
     * printf("\n%*d %*d",strlen(name),strlen(name),strlen(surname),strlen(surname));
     * */
    return 0;
}
