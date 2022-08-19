/* 
第十一章  编程练习 12 
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 256

int check_words(char* input);
int check_upper(char* input);
int check_lower(char* input);
int check_punct(char* input);
int chech_digit(char* input);
/* 相关函数的声明。*/
int main(int argc, char *argv[]) {
    char input[SIZE];
    int i = 0;
    while((input[i++] = getchar()) != EOF){
        if( i >= SIZE ){
            printf("Over flowed.\n");
            break;
        }
    }
    /* 读取用户输入的字符，直到EOF结束。*/

    printf("Hello you input complete.\nNow let's counting.\n");
    printf("Input words %d.\n",check_words(input));
    printf("Input upper char %d.\n",check_upper(input));
    printf("Input loewer char %d.\n",check_lower(input));
    printf("Input punct char %d.\n",check_punct(input));
    printf("Input digital  %d.\n",chech_digit(input));
    /* 统计并显示用户输入。*/

}
int check_words(char* input){
    /* 单词数统计，遇见第一个字母设置标记位，遇见非字符，标记位标记时
     * 单词数加 1 标记位清空。否则继续移动。 */
    int count = 0;
    int start = 0;
    while(*input != EOF){
        if(isalpha(*input) == 0 && start == 0 ){
            input++;
        }else if(isalpha(*input) == 0 && start == 1){
            input++;
            count++;
            start = 0;
        }else if(isalpha(*input) != 0){
            input++;
            start = 1;
        }
    }
    if(start == 1 ) count++;
    return count;
}

int check_upper(char* input){
    int count = 0;
    while( *input != EOF ){
        if(isupper(*input++) !=0 )count++;
    }
    return count;
}
int check_lower(char* input){
    int count = 0;
    while( *input != EOF ){
        if(islower(*input++) !=0 )count++;
    }
    return count;
}
int check_punct(char* input){
    int count = 0;
    while( *input != EOF ){
        if(ispunct(*input++) !=0 )count++;
    }
    return count;
}

int chech_digit(char* input){
    int count = 0;
    while( *input != EOF ){
        if(isdigit(*input++) !=0 )count++;
    }
    return count;
}
