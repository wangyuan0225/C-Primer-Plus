/*
第十四章：编程练习 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 20           /* 最大书籍数量 */
char * s_gets(char * st, int n);
struct book{                /* 建立 book 模板 */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    int delete_flag;
};
/* 添加删除标记成员 */

int main(int argc, char * argv[])
{
    struct book library[MAXBKS]; /* 结构数组 */
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);
    char delete;
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);      /* 定位到文件开始 */
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    /* 添加标志位，并不影响数据的读取功能，fread()函数按照结构体book的存储空间大小
     * 依次读取相同字节。可参见语句： int size = sizeof(struct book);*/
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    printf("Do you want to modefy library?(y/n):");
    scanf("%c",&delete);
    if(delete == 'y'){
        for(int i = 0;i < count; i++){
            printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
            while(getchar() != '\n') continue;
            puts("Do you want to deleet this book ?(Y/N).");
            scanf("%c",&delete);
            if(delete == 'y') library[i].delete_flag = 1;
        }
    }
    /* 用户修改原数组，可以设置其标记位，表明其被删除。添加记录信息是可通过改标记覆盖旧数据。*/

    while(getchar() != '\n') continue;
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL&&library[count].title[0] != '\0' && library[count].delete_flag != 1)
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count].value);
        library[count++].delete_flag = 0;
        while (getchar() != '\n')
            continue;     /* 清理输入行 */
        if (count < MAXBKS)
            puts("Enter the next title.");
    }
    /* 记录新信息可以覆盖被删除信息。 */
    rewind(pbooks);      /* 定位到文件开始 */
    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            if(library[index].delete_flag != 1){
                printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
                fwrite(&library[filecount],size,count - filecount,pbooks);
            }
    }
    /* 保存数据时忽略被删除标记过的信息。*/
    else
        puts("No books? Too bad.\n");
    puts("Bye.\n");
    return 0;
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
                continue;           // 清理输入行
    }
    return ret_val;
}

