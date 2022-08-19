/*
第十七章：编程练习 3 list.c —— 支持链表操作的函数   list.h略
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
    plist = (List* )malloc(sizeof(List));
    if(plist != NULL) (* plist).items = 0;
    else exit(EXIT_FAILURE);
}

/* 如果链表为空 ，返回 true */
bool ListIsEmpty(const List * plist)
{
    /* 使用items成员直接判别是否为空 */
    if((* plist).items == 0)
        return true;
    else
        return false;
}

/* 如果链表已满 ，返回 true */
bool ListIsFull(const List * plist)
{
    bool full;
    if((* plist).items == MAXSIZE)
        full = true;
    else
        full = false;
    return full;
}

/* 返回节点数量 */
unsigned int ListItemCount(const List * plist)
{
    return (unsigned int)(* plist).items;
}

/* 创建存储项节点 */
bool AddItem(Item item, List * plist)
{
    if(ListIsFull(plist)
        return false;
    /* 静态列表需要判断链表是否满 */
    CopyToNode(item,(* plist).enteries[(* plist).items++]);
    /* 复制节点进行数的下一个元素，下标表示为(* plist).items++*/

    return true;
}

void Traverse(const List * plist,void (* pfun)(Item item))
{
    int i = 0;

    while(i < (* plist).items)
        (* pfun)((* plist).enteries[i++]);
    /* 按照数组的形式便利所有节点*/

}

void EmptyTheList(List * plist)
{
    (* plist).items = 0;
}

static void CopyToNode(Item item,const List * plist)
{

    strcpy((*plist).enteries[(* plist).items -1].title,item.title);
    (*plist).enteries[(* plist).items -1].rating = item.rating
    /* 该函数需要根据Item结构体进行修改,以上是针对struct film 修改的例子 。
     * (*plist).enteries[(* plist).items -1] = item;
     * */
}

