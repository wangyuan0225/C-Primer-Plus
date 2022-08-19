/*
第十七章：编程练习 8 TREE.H 二叉查找树，树中不允许有重复项
由于文件名重复，因此，请修改文件名再使用。
*/

#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>
#define SLEN 20

typedef struct item {
    char petname[SLEN];
    char petkind[SLEN][SLEN];
} Item;
/* 定义节点内容 */
#define MAXITEMS 100

typedef struct trnode {
    Item item;
    struct trnode * left;
    struct trnode * right;
} Trnode;
/* 定义节点 */

typedef struct tree {
    Trnode * root;
    int size;
} Tree;
/* 定义二叉查找树*/

/* 函数原型 */
/* 初始化树*/
void InitializeTree(Tree * ptree);

/* 树判空 */
bool TreeIsEmpty(const Tree * ptree);

/* 树判满*/
bool TreeIsFull(const Tree * ptree);

/* 树项数*/
int TreeItemCount(const Tree * ptree);

/* 添加节点*/
bool AddItem(const Item * pi,Tree * ptree);

/* 树内查找*/
bool InTree(const Item * pi,const Tree * ptree);

/* 删除项*/
bool DeleteItem(const Item * pi,Tree * ptree);

/* 遍历树*/
void Traverse(const Tree * ptree,void (* pfun)(Item item));

/* 清空树*/
void DeleteAll(Tree * ptree);

#endif

