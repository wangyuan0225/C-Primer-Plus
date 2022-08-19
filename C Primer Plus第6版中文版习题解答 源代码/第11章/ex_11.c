/* 
第十一章  编程练习 11 
*/
/* 程序排序功能主要是用了order的10X2数组 ，第一列保存原字符串顺序
 * 第二列分别保存菜单排序的特征值，并按照该特征值进行排序。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
#define NUMBER 5

void show_menu(void);
void input_string(int number, char st[][SIZE]);
void print_original(int number, char st[][SIZE]);
void print_ascii(int number, char st[][SIZE]);
void print_length(int number, char st[][SIZE]);
void print_words(int number, char st[][SIZE]);
void sort_order(int number, int order[][2]);
int get_word_length(char *input);

int main(int argc, char *argv[]) {
    char test[NUMBER][SIZE];
    int selected;
    input_string(NUMBER,test);
    show_menu();
    scanf("%d",&selected);
    while(selected != 5){
        switch (selected) {
            case 1: print_original(NUMBER, test); break;
            case 2: print_ascii(NUMBER, test); break;
            case 3: print_length(NUMBER, test); break;
            case 4: print_words(NUMBER, test); break;
            case 5: break;
            default:
                printf("Error select, retry!\n");
        }
        show_menu();
        scanf("%d",&selected);
    }
    printf("All done, bye.");
}

void show_menu(){
    printf("==============================================================\n");
    printf("1) print original strings.   2) print string by ascii order\n");
    printf("3) printf string by length.  4) print string by word length\n");
    printf("5) quit.\n");
    printf("===============================================================\n");
}
void input_string(int number, char st[][SIZE]){
    /* 循环读取5个字符串，并保存至二维数组。*/
    printf("Please input 5 strings serperate by enter.\n");
    for(int i = 0;i< number ;i++){
        fgets(st[i],SIZE,stdin);
    }
}
void print_original(int number, char st[][SIZE]){
    /* 无排序处理，按照原顺序打印。*/
    printf("print 5 strings in original mode.\n");
    for(int i = 0;i< number ;i++){
        printf("%d. %s",i,st[i]);
    }
}
void print_ascii(int number, char st[][SIZE]){
    printf("print 5 strings in ascii mode.\n");
    int order[number][2];
    for(int i = 0;i< number ;i++){
        /* ascii排序需要将首字母提取，作为特征值存至order数组第二列 */
        order[i][0] = i;
        order[i][1] = st[i][0];
    }
    /* 通过st[i][0]取出整个字符串的首字母，并将其存储order数组进行排序处理。*/
    sort_order(number, order);
    /* 按照ASCII特征值进行排序。*/
    for(int i = 0;i < number ;i++){
        /*排序完成按照order对应原数组进行打印*/
        printf("ASCII No.%d. %s",i,st[order[i][0]]);
    }
}
void print_length(int number, char st[][SIZE]){
    printf("print 5 strings in length mode.\n");
    int order[number][2];
    for(int i = 0;i< number ;i++){
        order[i][0] = i;
        order[i][1] = strlen( st[i]);
    }
    /* 分别使用strlen()函数计算字符串长度，并将长度数
    *值作为排序特征值转存入order数组进行排序处理。*/
    sort_order(number, order);
    /* 按照数组长度的特征值进行排序。*/
    for(int i = 0;i < number ;i++){
        printf("LENGTH No.%d. %s",i,st[order[i][0]]);
    }
}
void print_words(int number, char st[][SIZE]){
    printf("print 5 strings in words mode.\n");
    int order[number][2];
    for(int i = 0;i< number ;i++){
        order[i][0] = i;
        order[i][1] = get_word_length(st[i]);
    }
    /* 分别使用get_word_length()函数计算字符串内单词的长度，并将单词长度数
    *值作为排序特征值转存入order数组进行排序处理。*/
    sort_order(number, order);
    /* 按照数组内单词长度的特征值进行排序。*/
    for(int i = 0;i < number ;i++){
        printf("WORDS No.%d. %s",i,st[order[i][0]]);
    }
}


void sort_order(int number, int order[][2]){
    /* 函数对输入的二维数组进行排序处理。使用二维数组主要目的是
    保持原字符串内容，并具备一定的通用型，可以灵活的对数组长度
    单词长度等题目要求进行排序。*/
    int temp[2];
    for(int i = 0;i< number-1 ;i++){
        for(int j = 0  ;j < number -1-i ;j++){
            if(order[j][1] > order[j+1][1]){
                temp[0] = order[j][0];
                temp[1] = order[j][1];
                order[j][0] = order[j+1][0];
                order[j][1] = order[j+1][1];
                order[j+1][0] = temp[0];
                order[j+1][1] = temp[1];
            }
        }
    }
}

int get_word_length(char *input){
    /* 函数功能是计算每一个字符串的第一个单词的长度。*/
    char *in = input;
    int length = 0;
    while(isalpha(*in) == 0) in++;
    /*  通过while循环删除掉字符串前面非字母字符。 */
    while(isalpha(*in) != 0){
        in++;
        length++;
    }
    /* 从第一个非空白字符开始计数，直到单词结束，*/
    return length;
}

