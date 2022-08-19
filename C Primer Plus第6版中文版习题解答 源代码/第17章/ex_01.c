/*
第十七章：编程练习 1双向链表实现
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
    struct film * pre;/* 前向链接指针*/
};
/*双向链表*/
char * s_gets(char *st, int n);
int main(void){
    struct film * head = NULL;
    struct film * prev, *current;
    char input[TSIZE];

    /*收集并存储信息*/
    puts("Enter first movie title:");
    while(s_gets(input,TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if(head == NULL){
            head = current;
            /* 头指针固定，不在修改移动 */
        }
        else{
            prev->next = current;
            current->pre = prev;
            /* 两个节点时，新加节点双向指针建立链接 */
        }
        current->next = NULL;
        /* 最后节点指针设置为空 */
        strcpy(current->title,input);
        puts("Enter your rating <0-10>:");
        scanf("%d",&current->rating);
        while(getchar() != '\n') continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
        /* */
    }
/* 显示电影列表 */
    if(head == NULL)
        printf("No data entered.");
    else
        printf("Here is the movie list(by sequence):\n");
    current = head;
    while(current != NULL)
    {
        printf("Movie:%s Rating:%d\n",current->title,current->rating);
        current = current->next;
    }
/* 逆序显示电影列表 */
    puts("Here is the movie list(by inverted sequence):");
    current = prev;
    /* 当前指针指向末尾节点 */
    while(current != NULL)
    {
        printf("Movie:%s Rating:%d\n",current->title,current->rating);
        current = current->pre;
        /* 通过节点的pre指针反向遍历 */
    }
/* 完成任务，释放已分配内存 */
    current = head;
    while(current != NULL)
    {
        head = current->next;
        free(current);
        current = head;
    }
    /* 释放节点时，需要保证head和current分别指向相邻两个节点，
     * 通过两个指针的交替前移，才能保证不丢失节点。 */
    printf("Bye!\n");
    return 0;
}

char * s_gets(char * st, int n){
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val){
        find = strchr(st, '\n');    // 查找换行符
        if (find)                   // 如果地址不是 NULL，
            *find = '\0';              // 在此处放置一个空字符
        else while (getchar() != '\n')
                continue;                  // 处理输入行中剩余的字符
    }
    return ret_val;
}

