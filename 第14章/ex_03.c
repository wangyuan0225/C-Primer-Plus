/*
第十四章：编程练习 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL  40
#define MAXAUTL  40
#define MAXBKS 100    /* 书籍的最大数量 */
struct book{          /* 建立 book 模板  */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * s_gets(char * st, int n);
void list_book(struct book library[], int count);
void list_book_title(struct book library[], int count);
void list_book_value(struct book library[], int count);
/* 排序函数声明 */
int main(int argc, char * argv[])
{
    struct book library[MAXBKS];  /* book 类型结构的数组 */
    int count = 0;
    int index;
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;         /* 清理输入行*/
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if (count > 0)
    {
        list_book(library,count);
        list_book_title(library,count);
        list_book_value(library,count);
        /* 分别显示排序结果 */
    }
    else
        printf("No books? Too bad.\n");
    return 0;
}
void list_book(struct book library[], int count){
    /* 按输入顺序打印图书 */
    printf("Here is the list of your books:\n");
    for (int index = 0; index < count; index++)
        printf("%s by %s: $%.2f\n", library[index].title,library[index].author, library[index].value);
}

void list_book_title(struct book library[], int count){
    /* 按图书字母排序打印，为了不改变原输入顺序，新建了指针数组进行排序和打印 */
    char * ptitle[count];
    char *temp;
    int top, seek;

    for(int index = 0; index < count; index++)
        ptitle[index] = library[index].title;
    for(top = 0;top < count - 1; top++)
        for(seek = top + 1; seek < count; seek++)
            if(strcmp(ptitle[top],ptitle[seek]) > 0)
            {
                temp = ptitle[top];
                ptitle[top] = ptitle[seek];
                ptitle[seek] = temp;
            }
    /* 通过ptitle数组指向的title进行比较排序 */
    printf("Here is the list of your books by title :\n");
    for (int index = 0; index < count; index++)
        for (int i = 0; i < count; i++)
            if(ptitle[index] == library[i].title)
                /* 依据排序结果打印图书*/
                printf("%s by %s: $%.2f\n", library[i].title,library[i].author, library[i].value);

}
void list_book_value(struct book library[], int count){
    /* 按作图书价格排序打印，为了不改变原输入顺序，新建了指针数组进行排序和打印 */
    float * pvalue[count];
    float *temp;
    int top, seek;

    for(int index = 0; index < count; index++)
        pvalue[index] = &library[index].value;
    for(top = 0;top < count - 1; top++)
        for(seek = top + 1; seek < count; seek++)
            if((*pvalue[top] > *pvalue[seek]))
            {
                temp = pvalue[top];
                pvalue[top] = pvalue[seek];
                pvalue[seek] = temp;
            }
    /* 通过pvalue数组进行比较和排序*/
    printf("Here is the list of your books by value :\n");
    for (int index = 0; index < count; index++)
        for (int i = 0; i < count; i++)
            if(*pvalue[index] == library[i].value)
                /* 依据排序结果打印图书 */
                printf("%s by %s: $%.2f\n", library[i].title,library[i].author, library[i].value);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    // 查找换行符
        if (find)                   // 如果地址不是 NULL，
            *find = '\0';           // 在此处放置一个空字符
        else while (getchar() != '\n')
                continue;               // 处理输入行中剩余的字符
    }
    return ret_val;
}

