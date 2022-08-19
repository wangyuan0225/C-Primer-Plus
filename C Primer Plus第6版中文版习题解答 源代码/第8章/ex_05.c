/*
第八章：编程练习 5
*/

#include <stdio.h>

int main(void) {
    int head = 1;
    int tail = 100;
    int guess = (head + tail) / 2;
/* 定义三个变量分别标识查找区域的起始、终止位置以及中数 */
    char ch;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    do{
        printf("Un...is your number %d?: ",guess);
        if(getchar() == 'y') break;
        printf("Well, then, %d is larger or smaller than yours? (l or s):",guess);
        while((ch = getchar()) == '\n') continue;
        if(ch == 'l' || ch == 'L'){
            tail = guess - 1;
            guess = (head + tail)/2;
            continue;
        /* 如果输入L，则表示目标数在区间的前半区，因此可以舍弃中数到终止位置的后半区数据，
      * 随后切换变量 tail 和中数 guess */
        }else if(ch == 's' || ch == 'S'){
            head = guess + 1;
            guess = (head + tail)/2;
            continue;
        /* 如果输入S，则表示目标数在区间的后半区，因此可以舍弃起始数到中数前半区数据，
        * 随后切换变量 head 和中数 guess */
        }else{continue;}
    }while (getchar() != 'y');

    printf("I knew i could do it!\n");
    return 0;
}
