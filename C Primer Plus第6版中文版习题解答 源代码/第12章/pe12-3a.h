/*
第十二章：编程练习 3  pe12-3a.h 头文件，和pe12-3a.c(EX_03.C)一起编译
*/

#include <stdio.h>

void set_mode(int *mode, int n);
/* set_mode()函数需要修改mode变量，因此使用指针方式进行数据传输 */

void get_info(int mode, double* range, double* fuel);
/* get_info() 函数读取用户输入的距离和汽油数据，因此使用指针形式传递
 * 距离和汽油变量，返回值为void。*/

void show_info(int mode, double range, double fuel);
/* 修改函数为参数传递，由于程序功能是直接打印计算结果，所以返回值为void*/
