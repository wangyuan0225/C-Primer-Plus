/* 
第十一章  编程练习 6 
*/
#include <stdio.h>
#define SIZE 80
int is_within(char c, char* st);

int main(int argc, char *argv[]) {
   char source[SIZE];
   char dest = ' ';
   char *position;
   printf("Enter a String: ");
   fgets(source,SIZE,stdin);
   /* 读取一个待检索的字符串 */
   while(dest != EOF){
      /* 考虑其他字符可能会被检索使用，退出字符使用EOF */
      printf("Enter a char to find (EOF for Quit):");
      while((dest = getchar()) == '\n') continue;
      /* 读取目标字符，且删除多余的换行符。*/
      if(is_within(dest,source)!= 0)
         printf("Found the char %c in the string\n",dest);
      else
         printf("Char %c not found. Try another?\n",dest);
      /* 调用函数，打印搜索结果。*/
   }
    return 0;
}
int is_within(char c, char* st){
   while(*st != '\0'){
   /* 循环入口条件是判断是否到字符串结尾。*/
      if(*st == c)
         return 1;
      /* 匹配，即返回当前指针。*/
      else
         st++;
      /* 否则，判断下一个字符*/
   }
   return 0;
}

