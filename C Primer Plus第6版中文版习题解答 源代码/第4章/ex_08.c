/*
第四章：编程练习 8
*/
#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
/* 使用define语句定义单位之间的换算比例 */
int main(void){
   float range,oil;
   printf("Pleast input the range you traveled(in mile):");
   scanf("%f",&range);
   /* 以英里为单位读取旅行里程 */
   printf("Pleast input the oil you spend(in gallon):");
   scanf("%f",&oil);
   /* 以️加仑为单位读取燃油消耗。 */
   printf("In UAS, your oil wear is %.1f M/G\n",range/oil);
   /* 打印USA的油耗 英里/加仑 */
   printf("In Europe, your oil wear is %.1fL/100KM",(oil*GALLON_TO_LITRE)/(range*MILE_TO_KM)*100);
   /* 打印欧洲的油耗 升/百公里 */

   return 0;
}
