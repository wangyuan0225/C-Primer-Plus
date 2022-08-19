/*
第十二章：编程练习 8  
*/ 

#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);
/* 函数声明，show_array()函数的参数使用const关键字，保证函数内部修改
 * 参数的数组内容。*/
int main(int argc, char *argv[])
{
   int * pa;
   int size;
   int value;
   printf("Enter the number of elements: ");
   while (scanf("%d", &size) == 1 && size > 0)
   {
      printf("Enter the initialization value: ");
      scanf("%d", &value);
      pa = make_array(size, value);
      if (pa)
      {
         show_array(pa, size);
         free(pa);
         /* 当pa不为空表明make_array()函数正确返回，显示后free该数组，
          * 进入下一次循环，如果没有free()调用，则下一次循环会造成这一次
          * make_array()函数中malloc()申请内存的内存泄漏。*/
      }
      printf("Enter the number of elements (<1 to quit): ");
   }
   printf("Done.\n");
   return 0;
}

int* make_array(int elem, int val)
{
   int *p = (int*)malloc(elem * sizeof(int));
   if( p == NULL ) return NULL;
   for (int i = 0; i < elem; ++i) {
      p[i] = val;
   }
   /* 使用数组形式进行复制初始化。*/
   return p;
}

void show_array(const int ar[], int n)
{
   for (int i = 0; i < n; i++) {
      printf("%d ", ar[i]);
      if((i + 1) % 8 == 0) putchar('\n');
      /* 每行打印8个数据，随后输入换行符。*/
   }
   putchar('\n');
}
