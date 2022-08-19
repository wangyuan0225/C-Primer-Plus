/*
第八章：编程练习 3
*/

#include <stdio.h>
#include <ctype.h>/*islower()，isupper()函数的头文件*/
int main(void) {
    int lowercase = 0;
    int uppercase = 0;
    char ch;
    while((ch=getchar())!= EOF){
      if(ch >= 'A' && ch <= 'Z')
         uppercase++;
      if(ch >= 'a' && ch <= 'z')
         lowercase++;
      /*使用ASCII码表中连续字符的特性进行判断*/
        /*
         * if(islower(ch)) lowercase++;
         * if(isupper(ch)) uppercase++;
         * 也可以使用ctype.h苦中的字符判断函数进行判断。需
         * 添加头文件*/
    }
    printf("There are %d uppercase, and %d lowercase in that file!\n",uppercase,lowercase);
    return 0;
}
