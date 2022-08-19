/*
第八章：编程练习 4
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int words = 0;
    int letter = 0;
    char ch;
    while((ch=getchar())!= EOF){
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            letter++;
        /* 除可以利用字母在ASCII码表中连续的方法判断字母数量外，也可以使用
         * isalpha()函数进行判断，ch是字母返回非0。
         * if(isalpha(ch) != 0) letter++;
         * */
        if(ch == ' ' || ch == ','|| ch == '.'|| ch == '\n')
           words++;
        /* 可以利用字符是标点符号进行判断，上面判断不够完整，还有例如括号（）问号
         * ？感叹号等等未列入，也可以利用ASCII中符号连续区间进行判断。使用ispuncht()
         * 函数更加简便。但是，该函数无法判断空格，因此需要取"或"。
         * if(ispunct(ch) != 0 || ch == ' ') words++;
         * */
    }
    printf("There are %d words, and %d character， %.2f C/W!\n",words,letter,1.0*letter/words);
    return 0;
}

