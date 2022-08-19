/* 
第十一章  编程练习 4 
*/
#include <stdio.h>
#include <ctype.h>
/* 使用isalpha()需要添加该头文件 */
#define SIZE 80
char * get_word(char *out, int n);

int main(int argc, char *argv[]){
    char output[SIZE];
    get_word(output,SIZE);
    printf("First word you input is : %s", output);
    return 0;
}

char * get_word(char *out, int n){
    char input[SIZE];
    char *in = input;
    int i = 0;
    puts("Enter a String:");
    fgets(input,SIZE,stdin);

    while((*in == '\n' || *in == '\t' || *in == ' ')&& *in != '\0')
        in++;
    /*  通过while循环删除掉字符串前面空白。此处需要注意无单词的字符串。
     * 当前代码只是删除指定的字符，日常使用可以使用isalpha()来判断是
     * 这样可以删除多种标点符号和特殊字符。可读性和应用性更加广泛。
     * */

    while(*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n){
        *out++ = *in++;
        i++;
    }
    /* 从第一个非空白字符开始复制，直到单词结束，这里同样可以使用isalpha()。
     * 添加函数参数表明可以读取的最大字符数，超出限制自动截断。
     * 如果需要保存至字符串，添加：
     * *out++ = '\0';
     * */
    return out;
}

