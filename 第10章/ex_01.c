/*
第十章：编程练习 1
*/
#include <stdio.h>
#define MONTHS 12 //一年的月份数
#define YEARS 5 //年数
int main(void) {
    const float rain[YEARS][MONTHS] = {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    int year, month;
    float subtot, total;
    const float (*ptr)[MONTHS] = rain;
    /*定义指向二维数组的指针ptr,ptr指向含有MONTHS个元素的浮点型数值的数组。
     * 赋值语句将ptr指针初始化，使其指向rain数组。rain含有YEARS个[MONTHS]
     * 类型数组。const表示和rain的类型匹配。
     * */
    printf(" YEAR      RAINFALL   (inchs)\n");
    for(year = 0, total = 0; year < YEARS; year++){
        for(month = 0, subtot = 0; month < MONTHS; month++)
            subtot += *(*(ptr + year)+month);
        /*  ptr+year表示二维数组的行移动，*(ptr + year)+ month表示
         * 二维数组在行内的移动。*(*(ptr + year)+month)表示取确定元素
         * 的浮点数值
         * */
        printf("%5d %15.1f\n", 2010 + year,subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches. \n\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf("Nov  Dec\n");

    for(month = 0; month < MONTHS; month++){
        for(year = 0, subtot = 0;year < YEARS; year++)
            subtot += *(*(ptr + year)+month);
        /*具体含义如上。
         * */
        printf("%4.1f ",subtot/YEARS);
    }
    printf("\n");
    return 0;
}