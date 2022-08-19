/*
第七章：编程练习 11
*/

#include <stdio.h>
#define PRICE_ARTI 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROT 1.09
#define DISCOUNT 0.05
/* 常量定义*/
void show_menu(void);
float get_weight(void);
/* 函数声明*/

int main(void)
{
    float w_arti = 0;
    float w_beet = 0;
    float w_carrot = 0;
    char selected;
    float weight,amount,rebate,freight,total;
    do{
        show_menu();
        scanf("%c",&selected);
        switch(selected){
            case 'a':
                w_arti += get_weight();
                break;
            case 'b':
                w_beet += get_weight();
                break;
            case 'c':
                w_carrot += get_weight();
                break;
            case 'q':
                break;
            default:
                printf("Error input, retry!\n");
        }
    }while(selected != 'q');
    /* 获取所有订购货物的数量 */
    
    amount = w_arti*PRICE_ARTI+w_beet*PRICE_BEET+w_carrot*PRICE_CARROT;
    weight = w_arti + w_beet + w_carrot;
    /* 计算金额和货物重量 */
    
    if(amount >= 100 ) rebate = amount*DISCOUNT;
    else rebate = 0;
    /* 依据货物金额计算折扣 */
    
    if(weight <= 5) freight = 6.5;
    else if(weight >5 && weight <= 20 ) freight = 14;
    else freight = 14 + (weight - 20) * 0.5;
    /* 依据条件计算邮费 */
    total = amount + freight - rebate;

    printf("The price of vegetable:\nartichoke %g$/pound, beet %g$/pound, carrot %g$/pound.\n",PRICE_ARTI,PRICE_BEET,PRICE_CARROT);
    printf("You order %g pound artichoke， %g pound beet, %g pound carrot.\n",w_arti,w_beet,w_carrot);
    printf("You total order %g pounds, discunt %g$,  amount %g$, freight %g$, total %g$.\n",weight,rebate,amount,freight,total);
    printf("Done\n");
    return 0;
}
void show_menu(void){
    /* 显示订购选择菜单 */
    printf("**********************************************************************\n");
    printf("Enter the char corresponding to the desired vegetable.\n");
    printf("a) artichoke                    b) beet\n");
    printf("c) carrot                       q) quit & checkout\n");
    printf("**********************************************************************\n");
    printf("Please input the vegetable you want to buy(a,b,c or q for quit): ");
}
float get_weight(void){
    /* 读取用户输入的购买数量 */
    float weight;
    printf("Please input how many pounds you buy:");
    scanf("%f",&weight);
    printf("Ok, add %g pound to cart。\n",weight);
    getchar();
    return weight;
}

