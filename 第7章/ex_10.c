/*
第七章：编程练习 10
*/

#include <stdio.h>
#define SINGLE 17850
#define HOLDER 23900
#define MARRY 29750
#define DIVORCE 14875
#define BASE_TAX 0.15
#define EXTRA_TAX 0.28
/* 定义相关的常量数据 */

int main(void)
{
    char type;
    float salary;
    float tax, salary_taxed;
    do{
        printf("Please select tax type. There are for type:\n");
        printf("1)Single   2)House holder  3)Married    4)Divorced   5)Quit:");
        scanf("%c",&type);
        /* 选择纳税类型 switch语句对不同类型分别计算*/
        switch(type){
            case '1':/* single类型 */
                printf("Enter your salary:");
                scanf("%f",&salary);
                if(salary <= SINGLE){
                    tax = salary*BASE_TAX;
                    salary_taxed = salary - tax;
                }else{
                    tax = salary*BASE_TAX + (salary - SINGLE)*EXTRA_TAX;
                    salary_taxed = salary - tax;
                }
                printf("Hi,your salary is %.2f, tax is %.2f ,after tax salary is %.2f\b",salary,tax,salary_taxed);
                break;
            case '2':/* houe holder 类型 */
                printf("Enter your salary:");
                scanf("%f",&salary);
                if(salary <= HOLDER){
                    tax = salary*BASE_TAX;
                    salary_taxed = salary - tax;
                }else{
                    tax = salary*BASE_TAX + (salary - HOLDER)*EXTRA_TAX;
                    salary_taxed = salary - tax;
                }
                printf("Hi,your salary is %.2f, tax is %.2f ,after tax salary is %.2f\b",salary,tax,salary_taxed);
                break;
            case '3':/* Married类型 */
                printf("Enter your salary:");
                scanf("%f",&salary);
                if(salary <= MARRY){
                    tax = salary*BASE_TAX;
                    salary_taxed = salary - tax;
                }else{
                    tax = salary*BASE_TAX + (salary - MARRY)*EXTRA_TAX;
                    salary_taxed = salary - tax;
                }
                printf("Hi,your salary is %.2f, tax is %.2f ,after tax salary is %.2f\b",salary,tax,salary_taxed);
                break;
            case '4':/* divorce类型 */
                printf("Enter your salary:");
                scanf("%f",&salary);
                if(salary <= DIVORCE){
                    tax = salary*BASE_TAX;
                    salary_taxed = salary - tax;
                }else{
                    tax = salary*BASE_TAX + (salary - DIVORCE)*EXTRA_TAX;
                    salary_taxed = salary - tax;
                }
                printf("Hi,your salary is %.2f, tax is %.2f ,after tax salary is %.2f\b",salary,tax,salary_taxed);
                break;
            case '5':
                break;
            default:
                printf("Wrong type. Please retry.\n");
        }
    }while(type != '5');
    printf("Done\n");
    return 0;
}

