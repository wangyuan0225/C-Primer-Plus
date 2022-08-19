/*
第七章：编程练习 5
*/

#include <stdio.h>
int main(void)
{
   int counter = 0;
   char ch;
   printf("Please input chars (# for exit):");
   while((ch = getchar()) != '#')
   /* 循环读取标准输入字符，直到输入 # 号。*/
   {
      switch(ch){
         case '!': 
            printf("!!");
            counter++;
            break;
         case '.':
            printf("!");
            counter++;
            break;
         default:
            printf("%c",ch);
      }
   }
   printf("\nTotal replace %d times\n",counter);
   printf("Done\n");
   return 0;
}

