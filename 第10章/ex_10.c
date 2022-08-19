/*
第十章：编程练习 10
*/
#include <stdio.h>
#define INDEX 4

void add_array(int n, int t[n], const int s1[n],const int s2[n]);
/*数组加法函数的三个形式参数分别表示数组长度、求和结果数据和两个加数数组。
 * 程序使用变长数组形式分别表示三个数组的形参形式。s1,s2数组设置为const
 * 保证函数内不会修改两个源数组的值。
 * */
int main(void) {
    int sum[INDEX],s1[INDEX]={2,4,5,8}, s2[INDEX]={1,0,4,6};
    add_array(INDEX, sum, s1, s2);
    for(int i = 0;i < INDEX; i++)
        printf("%d ",sum[i]);
    return 0;
}
void add_array(int n, int t[n], const int s1[n],const int s2[n]){
    for(int i = 0;i < n; i++)
        t[i] = s1[i] + s2[i];
}
/*相加算法中由于三个数组有共通的长度和对应的下标值，因此只需要简单相加并且赋值。
 * */
