/*
第十七章：编程练习 1 递归调用实现
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45
/*递归调用实现逆序 */
struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};
void invert_show(struct film * ptr);
char * s_gets(char *st, int n);

int main(void){
    struct film * head = NULL;
    struct film * prev,* current;
    char input[TSIZE];
    /*收集并存储信息*/
    puts("Enter first movie title:");
    while(s_gets(input,TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if(head == NULL)
            head = current;
            /* 头指针固定，不在修改移动 */
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title,input);
        puts("Enter your rating <0-10>:");
        scanf("%d",&current->rating);
        while(getchar() != '\n') continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    if(head == NULL)
        printf("No data entered.");
    else
        printf("Here is the movie listi(by sequence):\n");
    current = head;
    while(current != NULL)
    {
        printf("Movie:%s Rating:%d\n",current->title,current->rating);
        current = current->next;
    }

    puts("Here is the movie list(by inverted sequence):");
    invert_show(head);

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
        find = strchr(st, '\n');          // 查找换行符
        if (find)                         // 如果地址不是 NULL，
            *find = '\0';                 // 在此处放置一个空字符
        else while (getchar() != '\n')
                continue;                  // 处理输入行中剩余的字符
    }
    return ret_val;
}
void invert_show(struct film * ptr)
{
    if(ptr->next != NULL)
        invert_show(ptr->next);
    /* 递归调用，当到达最后一个元素，开始递归返回 */
    printf("Movie:%s Rating:%d\n",ptr->title,ptr->rating);
}

