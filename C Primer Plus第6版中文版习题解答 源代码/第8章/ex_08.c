/*
第八章：编程练习 8
*/

#include <stdio.h>

void show_menu(void);
/* 显示菜单输出 */
float get_number(void);
/* 读取用户输入的运算数 */

int main(void) {
    char operate;
    float first,second;
    do{
        show_menu();
        operate = getchar();
        while(getchar() != '\n') continue;
        /* operate变量保存用户的菜单输入，并通过while循环清除非字符输入。*/
        switch(operate){
            case 'a':
                printf("Enter first number: ");
                first = get_number();
                printf("Enter second number: ");
                second = get_number();
                printf("%g + %g = %g \n",first,second,first+second);
                break;
            case 's':
                printf("Enter first number: ");
                first = get_number();
                printf("Enter second number: ");
                second = get_number();
                printf("%g - %g = %g \n",first,second,first-second);
                break;
            case 'm':
                printf("Enter first number: ");
                first = get_number();
                printf("Enter second number: ");
                second = get_number();
                printf("%g  *  %g = %g \n",first,second,first*second);
                break;
            case 'd':
                printf("Enter first number: ");
                first = get_number();
                printf("Enter second number: ");
                while((second = get_number()) == 0){ 
                    printf("Enter a number other than 0: ");
                }/* 判断除法操作数，对错误数据给出错误提示，直到获得正确的输入数据。*/
                printf("%g / %g = %g \n",first,second,first/second);
                break;
            case 'q':
                break;
            default:
                printf("Please enter a char, such as a, s, m, d and q: \n");
                while(getchar()!='\n');
                break;
        }
        while(getchar()!='\n');
    }while(operate != 'q');
    printf("Bye!\n");
    return 0;
}

void show_menu(void){
    printf("Enter the operation of your choice:\n");
    printf("a. add               s. subtract \n");
    printf("m. multiply          d. divide \n");
    printf("q. quit \n");
}
float get_number(void){
    float f;
    char c;
    while(scanf("%g",&f) != 1){
        while((c = getchar())!='\n')
            putchar(c);
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5,-1,78E8,or 3: ");
    }
    /* 判断输入数据的格式，对错误数据给出错误提示，直到获得正确的输入格式。*/
    return f;
}
