/*
第四章：编程练习 5
*/
#include <stdio.h>
int main(void) {
    float speed,size,time;
    printf("Pleast input the net speed(megabits per second):");
    scanf("%f",&speed);
    printf("Pleast input the file size(megabyte):");
    scanf("%f",&size);
    /* 分别读取网络速度和文件大小，存入相应变量。 */
    time = size*8/speed;
    /* 计算下载实践，文件大小需要转换成为比特。*/
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.\n",speed,size,time);
    return 0;
}
