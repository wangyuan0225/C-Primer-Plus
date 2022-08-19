/*
第十七章：编程练习 2。 list.c —— 支持链表操作的函数   list.h略
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* 局部函数原型 */
static void CopyToNode(Item item,Node * pnode);
/* 接口函数 */
/* 把链表置空 */

void InitializeList(List * plist)
{
    (* plist).head = NULL;
    (* plist).end = NULL;
    /* 初始化列表，头尾双指针均设置为空 */
}
/* 如果链表为空 ，返回 true */
bool ListIsEmpty(const List * plist)
{
    if((* plist).head == NULL)
        return true;
    else
        return false;
}
/* 如果链表已满 ，返回 true */
bool ListIsFull(const List * plist)
{
    Node * pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if(pt == NULL)
        full = true;
    else
        full = false;
    free(pt);

    return full;
}
/* 返回节点数量 */
unsigned int ListItemCount(const List * plist)
{
    unsigned int count = 0;
    Node * pnode = (* plist).head;

    while(pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }
    return count;
}
/* 创建存储项节点，并将其添加至由plist指向的链表末尾（较慢的实现）*/
bool AddItem(Item item,List * plist)
{
    Node * pnew;
    Node * scan = (* plist).head;

    pnew = (Node *)malloc(sizeof(Node));
    if(pnew == NULL)
        return false;/* 失败时 退出函数*/

    CopyToNode(item, pnew);
    pnew->next = NULL;
    if(scan == NULL) /* 空链表，所以把pnew放到链表的开头 */
        (* plist).head = pnew;
        (* plist).end = pnew;
        /* 空链表第一个元素，首尾均指向该元素*/
    else
    {
        (* plist).end->next = pnew;
        (* plist).end = pnew;
        /* 以上为添加尾部指针之后的操作方式。直接添加至末尾，末尾后移。可以对比以下的
         * 原代码，原代码需要从头查找末尾，可以对比加了末尾指针之后的优势 */
/* 以下注释为17.5的原代码 */
/*        while(scan->next != NULL)
            scan = scan->next; 
        scan->next = pnew; 
*/
    }

    return true;
}

/* 访问每个节点并执行pfun指向的函数 */
void Traverse(const List * plist,void (* pfun)(Item item))
{
    Node * pnode = (* plist).head;
    while(pnode != NULL)
    {
        (* pfun)(pnode->item);
        pnode = pnode->next;
    }
}
/* 释放由malloc 分配的内存 ，设置链表指针为空 */
void EmptyTheList(List * plist)
{
    Node * psave;

    while((*plist).head != NULL)
    {
        psave = (*plist).head->next; /* 保存下一个节点地址 */
        free((*plist).head);      /* 释放当前节点 */
        (*plist).head = psave;    /* 前进至下一个节点 */
    }
}

/* 局部函数定义 把一个项拷贝至节点中 */
static void CopyToNode(Item item,Node * pnode)
{
    strpy(pnode->item.title,item.title);
    pnode->item.rating = item.rating;
    /* 该函数需要根据Item结构体进行修改,以上是针对struct film 修改的例子.
     * pnode->item = item;
     * * */
}

