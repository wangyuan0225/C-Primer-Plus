/*
第十四章：编程练习 4.b
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct user{
   char fname[15];
   char mname[15];
   char lname[15];
};
struct user_id{
   char sid[30];
   struct user name;
}user_list[5] = {
      {"302039823", {"Flossie", "Mike", "Dribble"}}};
*/
/* 使用非匿名形式的嵌套。初始化第一个元素。*/
/*
 * 下面是采用匿名结构模式定义的结构模版，两者在使用中存在区别。*/
struct user_id{
    char sid[30];
    struct {
        char fname[15];
        char mname[15];
        char lname[15];
    };
}user_list[5] = {
        {"302039823", "Flossie", "Mike", "Dribble"}};

void print_user_id(struct user_id user);
int main(int argc, char * argv[])
{
    printf("Test to printf struct contents:\n");
    print_user_id(user_list[0]);
    return 0;
}
/* chuan*/
void print_user_id(struct user_id user){
    if(strlen(user.sid)< 9) return;
    printf("USERID：%s, ",user.lname);
    printf(" %s ",user.fname);
    if(strlen(user.mname) > 0) printf("%c. ",user.mname[0]);
    printf("-- %s",user.sid);
    printf("\n");
    return;
}


