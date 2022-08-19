/*
第十二章：编程练习 2 pe12-2a.c和pe12-2b.c一起编译
*/
#include "pe12-2a.h"

int main(int argc, char *argv[]) {
    int n;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d",&n);
    while(n>=0){
        set_mode(n);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode: ");
        printf(" (-1 to quit ): ");
        scanf("%d",&n);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int n)
{
    if(n>1) {
        printf("Invalid mode specified.");
        if(mode == 0){
            printf(" Mode 0(Mrtric) used.\n");
        }else{
            printf(" Mode 1(US) used.\n");
        }
    } else mode = n;
}

void get_info(void)
{
    if(mode == 0 )
        printf("Enter distance traveled in kilometers:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%lf", &range);

    if(mode == 0 )
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter fuel consumed in gallons:");
    scanf("%lf", &fuel);
}

void show_info(void)
{
    if(mode == 0)
        printf("Fuel consumption is %.2lf liters per 100 km.\n", (fuel/range)*100);
    else
        printf("Fuel consumption is %.1lf miles per gallon.\n", range/fuel);
}

