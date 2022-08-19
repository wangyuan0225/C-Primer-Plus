/*
第二章：编程练习 3
*/
#include <stdio.h>
#define DAYS_PER_YEAR 365
/* 利用预编译指定一年的天数*/

int main() {
   int age,days;
   age = 31;
   /* 假设有31岁，后面将31岁转换成天数。*/
   days = age*DAYS_PER_YEAR;
   printf("You age is %d, and It is %d days. \n",age,days);

   return 0;
}
