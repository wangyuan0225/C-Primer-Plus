/*
第七章：编程练习 8
*/

#include <stdio.h>
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

void show_menu(void);/*显示基本薪资的菜单函数*/
float get_hours(void);
/* 读取用户输入工作时长的函数*/
void calc_salary(float base_salary,float hours);
/* 依据基本薪资和工作时长计算工资、税、税后工资的函数*/
int main(void)
{
    float hours = 0;
    char selected;
    do{
        show_menu();
        scanf("%c",&selected);
        switch(selected){
            case '1':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(8.75,hours);
                break;
                /* 选定基本薪资，读取用户输入的工作时长，计算薪资，税及税后工资*/
            case '2':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(9.33,hours);
                break;
            case '3':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(10.00,hours);
                break;
            case '4':
                printf("Hello, you select $8.75/hr. Enter the work hours: ");
                scanf("%f",&hours);
                calc_salary(11.20,hours);
                break;
            case '5':
                break;
            default:
                printf("Error selected! please retry!\n");
                getchar();
                break;
        }
    }while(selected != '5' );
    printf("Done\n");
    return 0;
}
void show_menu(void){
    /* 显示提示菜单 */
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) quit";

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
        /* 工作时间小于30的情况*/
        salary = hours*base_salary;
        tax = salary*BASE_TAX;
        taxed_salary = salary - tax;
    }else if(hours<=40){
        /* 工作时间大于40的情况*/
        salary = hours*base_salary;
        tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX;
        taxed_salary = salary - tax;
    }else{
        /* 其他工作时长条件下税收计算 */
        salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
        if(salary<=450) tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX;
        else tax = 300*BASE_TAX + (salary-300)*EXTRA_TAX + (salary-450)*EXCEED_TAX;
        taxed_salary = salary - tax;
    }
    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n",salary,tax,taxed_salary);
    printf("\ncontinue....\n");
}
