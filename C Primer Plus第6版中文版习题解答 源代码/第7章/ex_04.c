/*
第七章：编程练习 4
*/

#include <stdio.h>
int main(void)
{
    int counter = 0;
    char ch;
    printf("Please input chars (# for exit):");
    while((ch = getchar()) != '#')
    {
        if (ch == '!'){
            printf("!!");
            counter++;
            /* 替换感叹号，并计数*/
        }else if(ch == '.'){
            printf("!");
            counter++;
            /* 替换句号，并计数*/
        }else{
            printf("%c",ch);
            /* 其余字符直接输出*/
        }
    }
    printf("\nTotal replace %d times\n",counter);
    printf("Done\n");
    return 0;
}
