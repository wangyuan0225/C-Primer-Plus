/*
第八章：编程练习 1
*/

#include <stdio.h>

int main(void) {
   int counter = 0;
   char ch;
   while((ch = getchar())!= EOF){
      counter++;
      /* 特定情况下如果程序如果需要在统计不同类型的字符时，可以在本处
       *使用分支判断语句分类别统计；
       * 本处也可以使用语句 
       *if(ch > '\040') counter++;
       * ASCII码表内大于空格符（'\040'）的字符均可以是文本内使用的字符，由于
       *本题并未对具体字符类型作出规定，因此可以直接使用counter++计数。
       * */
   }
   printf("The File has %d characters.\n",counter);
   return 0;
}
