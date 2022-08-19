/*
第十四章：编程练习 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct seat{
    int id;
    int booked;
    char fname[20];
    char lname[20];
}list[12] = {};
/* 定义了航班的座位信息，booked表示是否预定的标记位。*/
void show_menu(void);
void get_empty(struct seat list[]);
/* 显示空余座位数量 */
void show_empty(struct seat list[]);
/* 显示空余座位的编号信息 */
void show_booked(struct seat list[]);
/* 显示已经预定的座位信息和客户信息 */
void book_seat(struct seat list[]);
/* 预定座位 */
void cancel_book(struct seat list[]);
/* 取消预定 */

int main(int argc, char * argv[]){
    char selected;
    show_menu();
    while((selected = getchar() )!= 'f'){
        switch(selected){
            case 'a':
                get_empty(list);
                break;
            case 'b':
                show_empty(list);
                break;
            case 'c':
                show_booked(list);
                break;
            case 'd':
                book_seat(list);
                break;
            case 'e':
                book_seat(list);
                break;
            default:
                break;
        }
        while(getchar() != '\n') continue;
        show_menu();
    }
    return 0;
}

void show_menu(void){
    puts("To choose a function, enter its letter label: ");
    puts("a) Show number of empty seats ");
    puts("b) Show list of empty seats ");
    puts("c) Show alphabetical list of seats ");
    puts("d) Assign a customer to a seat assignment ");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
}

void get_empty(struct seat list[]){
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        if(list[i].booked == 0) sum++;
    }
    printf("There are %d seats empty\n", sum);

}
void show_empty(struct seat list[]){
    printf("Empty list:");
    for (int i = 0; i < 12; ++i) {
        if(list[i].booked == 0)
            printf("%d ", (i+1));
    }
    putchar('\n');
}

void show_booked(struct seat list[]){
    struct seat* ptstr[12];
    for(int i = 0; i < 12; i++){
        ptstr[i] = &list[i];
    }
    int top, seek;
    struct seat* temp;
    for(top = 0 ;top < 12 - 1;top++){
        for(seek = top + 1;seek < 12; seek++){
            if(strcmp(ptstr[top]->fname,ptstr[seek]->fname) > 0){
                temp = ptstr[top];
                ptstr[top] = ptstr[seek];
                ptstr[seek] = temp;
            }
        }
    }
    puts("Alphabetical list:");
    for (int i = 0; i < 12; ++i) {
        if(ptstr[i]->booked == 1){
            printf("Seat No:%d book by %s.%s\n",(i+1), ptstr[i]->fname, ptstr[i]->lname);
        }
    }
}
void book_seat(struct seat list[]){
    int id;
    char fname[20],lname[20];
    show_empty(list);
    puts("Please select the seat:");
    scanf("%d",&id);
    if(list[id-1].booked == 1){
        puts("Error selected.");
        return;
    }
    list[id-1].id = id;
    puts("Please input you FIRST_NAME LAST_NAME.");
    scanf("%s %s",fname,lname);
    strcpy(list[id].fname,fname);
    strcpy(list[id].lname,lname);
    list[id-1].booked = 1;
    puts("Booked!");
}
void cancel_book(struct seat list[]){
    show_booked(list);
    int id;
    puts("Please select the seat to cancel:");
    scanf("%d",&id);
    if(list[id-1].booked == 0){
        puts("Error selected.");
        return;
    }
    list[id-1].booked = 0 ;
}
