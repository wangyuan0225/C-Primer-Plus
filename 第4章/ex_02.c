/*
第四章：编程练习 2
*/

#include <stdio.h>
int main(void){
    char name[40];
    int width;
    printf("Please input your  name:");
    scanf("%s",name);
    width = printf("\"%s\"\n.",name);
    /* 打印用户输入名字，并且使用转义序列 \" 打印双引号。
     * 并通过printf()函数的返回值获取名字的字符长度。
     */
    width -= 4;
    /* printf()返回值为打印字符数，因此，需要排除两个引号、
     * 一个换行符、一个句号。或者直接使用
     * width = strlen(name);
     * */
    printf("\"%20s\".\n",name);
    /* 在宽度为20的字段右端打印名字，使用转义序列\"打印双引号 */
    printf("\"%-20s\".\n",name);
    /* 在宽度为20的字段左端打印名字，使用转义序列\"打印双引号 */
    printf("\"%*s\".",(width+3),name);
    /* 使用修饰符*号，指定宽度参数，打印名字字符串*/
    return 0;
}
