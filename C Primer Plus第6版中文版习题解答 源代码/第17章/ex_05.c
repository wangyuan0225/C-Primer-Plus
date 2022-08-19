/*
第十七章：编程练习 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSTACK 100
/* 定义栈内数据项，Item */
typedef char Item;
typedef struct stack{
    Item items[MAXSTACK];   /* Item 存储数据信息 */
    int top;                /* top 描述栈的顶部位置*/
} Stack;

/* 栈接口声明 */
Stack * InitializeStack(void);
bool StackIsFull(Stack *ps);
bool StackIsEmpty(Stack *ps);
bool push(Item item,Stack *ps);
bool pop(Item *pitem,Stack *ps);
void EmptyTheStack(Stack *ps);
int main(void){
    Stack *pstack;
    int i = 0;
    Item ch;
    pstack = InitializeStack();
    char str[MAXSTACK];
    printf("Enter a String to Test stack:");
    scanf("%s",str);
    while(!StackIsFull(pstack)){
        if(str[i] != '\0') push(str[i++],pstack);
        else break;
    }
    while(!StackIsEmpty(pstack)){
        pop(&ch, pstack);
        printf("%c",ch);
    }
    EmptyTheStack(pstack);
    printf("Done!");
    return 0;
}
/* 栈初始化 */
Stack * InitializeStack(void){
    Stack *ps = (Stack*) malloc(sizeof(Stack));
    if(ps == NULL)exit(EXIT_FAILURE);
    ps->top = 0;
    return ps;
}
/* 判定栈是否满 */
bool StackIsFull(Stack *ps){
    if(ps->top == (MAXSTACK - 1))
        return true;
    else return false;
}
/* 判栈空 */
bool StackIsEmpty(Stack *ps){
    if(ps->top == 0)
        return true;
    else return false;
}
/* 数据入栈操作 */
bool push(Item item,Stack *ps){
    if(StackIsFull(ps)) return false;
    ps->items[ps->top + 1] = item;
    ps->top++;
    return true;
}
/* 数据出栈 */
bool pop(Item *pitem,Stack *ps){
    if(StackIsEmpty(ps)) return false;
    *pitem = ps->items[ps->top];
    ps->top--;
    return true;
}
/* 释放栈*/
void EmptyTheStack(Stack *ps){
    if(ps != NULL)
        free(ps);
}
