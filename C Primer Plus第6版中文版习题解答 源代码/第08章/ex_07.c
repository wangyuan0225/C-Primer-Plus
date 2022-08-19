/*
第八章：编程练习 7
*/

#include <stdio.h>
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

void show_menu(void);
float get_hours(void);
void calc_salary(float base_salary,float hours);
int main(void)
{
    float hours = 0;
    char selected;
    do{
        show_menu();
        selected = getchar();
        while(getchar() != '\n') continue;
        /*使用getcghar()函数读取第一个字符，并且抛弃输入的其他字符，清空缓存区，为scanf()
         * 正确读取数据作准备。switch语句合并了输入的大小写字符判断*/
        switch(selected){
            case 'a':
            case 'A':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(8.75,hours);
                break;
            case 'b':
            case 'B':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(9.33,hours);
                break;
            case 'c':
            case 'C':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(10.00,hours);
                break;
            case 'd':
            case 'D':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(11.20,hours);
                break;
            case 'q':
            case 'Q':
                break;
            default:
                printf("Error selected! please retry!\n");
                break;
        }
    }while(selected != 'q' && selected != 'Q' );
    printf("Done\n");
    return 0;
}
void show_menu(void){
    char s1[] = "a) $8.75/hr";
    char s2[] = "b) $9.33/hr";
    char s3[] = "c) $10.00/hr";
    char s4[] = "d) $11.20/hr";
    char s5[] = "q) quit";

    printf("**********************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("%-40s",s1);
    printf("%-40s\n",s2);
    printf("%-40s",s3);
    printf("%-40s\n",s4);
    printf("%-40s\n",s5);
    printf("**********************************************************************\n");
}

void calc_salary(float base_salary,float hours){
    float salary,tax,taxed_salary;

    if(hours<=30){
        salary = hours*base_salary;
        tax = salary*BASE_TAX;
        taxed_salary = salary - tax;
    }else if(hours<=40){
        salary = hours*base_salary;
        tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX;
        taxed_salary = salary - tax;
    }else{
        salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
        if(salary<=450) tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX;
        else tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX + (salary-450)*EXCEED_TAX;
        taxed_salary = salary - tax;
    }
    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n",salary,tax,taxed_salary);
    printf("\ncontinue....\n");
}

