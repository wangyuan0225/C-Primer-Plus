/*
* 第十七章：编程练习 4 
* 双队列的模拟程序，mall2.c
* 需要和queue.h，queue.c一起编译
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "queue.h"
#define MIN_PER_HR 60.0

struct{
    Queue line;
    int hours, perhour,wait_time;
    long cycle,cyclelimit,turnaways;
    long customers,served,sum_line,line_wait;
    double min_per_cust;
}Booth_line[2];
/* 为简化数据，将队列Queue和排队的基本参数，生成结构体模版，并创建两个元素的数组模拟排队
 * 使用这种形式的优势是更加有利于扩展模拟排队的数量，结构清晰简单。 */
bool newcustomer(double x);
Item customertime(long when);
int main(void)
{
    Item temp;
    InitializeQueue(&Booth_line[0].line);
    InitializeQueue(&Booth_line[1].line);
    srand((unsigned int) time(0));

    /* 两个队列的数据初始化 */
    puts("Case Study:Sigmund Lander's Advice Booth");
    puts("Enter the number of simulation hours for queue1:");
    scanf("%d",&Booth_line[0].hours);
    cBooth_line[0].yclelimit = MIN_PER_HR * Booth_line[0].hours;

    puts("Enter the number of simulation hours for queue2:");
    scanf("%d",&Booth_line[1].hours);
    Booth_line[1].cyclelimit = MIN_PER_HR * Booth_line[1].hours;

    puts("Enter the average number of customers per hour for queue1:");
    scanf("%d",&Booth_line[0].perhour);
    Booth_line[0].min_per_cust = MIN_PER_HR /Booth_line[0].perhour;

    puts("Enter the average number of customers per hour for queue2:");
    scanf("%d",&Booth_line[1].perhour);
    Booth_line[1].min_per_cust = MIN_PER_HR /Booth_line[1].perhour;
    
    /* 通过循环，分别模拟两个队列的排队状况，通过循环控制更加有利于升级，代码修改量较少 */
    for(int i = 0;i < 2;i++){
        for(Booth_line[i].cycle = 0;Booth_line[i].cycle < Booth_line[i].cyclelimit;Booth_line[i].cycle++)
        {
            if(newcustomer(Booth_line[i].min_per_cust))
            {
                if(QueueIsFull(&Booth_line[i].line))
                    Booth_line[i].turnaways++;
                else
                {
                    Booth_line[i].customers++;
                    temp = customertime(Booth_line[i].cycle);
                    EnQueue(temp,&Booth_line[i].line);
                }
            }
            if(Booth_line[i].wait_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))
            {
                DeQueue(&temp,&Booth_line[i].line);
                Booth_line[i].wait_time = temp.processtime;
                Booth_line[i].line_wait += Booth_line[i].cycle - temp.arrive;
                Booth_line[i].served++;
            }
            if(Booth_line[i].wait_time > 0)
                Booth_line[i].wait_time--;
            Booth_line[i].sum_line += QueueItemCount(&Booth_line[i].line);
        }
        if(Booth_line[i].customers > 0)
        {
            printf("customers accepted for queue%d:%ld\n",i+1,Booth_line[i].customers);
            printf(" customers served for queue%d:%ld\n",i+1,Booth_line[i].served);
            printf("    turnaways for queue%d:%ld\n",i+1,Booth_line[i].turnaways);
            printf("average wait time for queue%d:%.2f minutes\n",i+1,(double)Booth_line[i].line_wait / Booth_line[i].served);
        }
        else
            puts("No cunstomers for queue%d!",i+1);
        EmptyTheQueue(&Booth_line[i].line);

    }
    bool newcustomer(double x)
    {
        if(rand() * x / RAND_MAX < 1)
            return true;
        else
            return false;
    }
    Item customertime(long when)
    {
        Item cust;
        cust.processtime = rand() % 3 + 1;
        cust.arrive = when;
        return cust;
    }

