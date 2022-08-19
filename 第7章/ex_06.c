/*
第七章：编程练习 6
*/

#include <stdio.h>
int main(void)
{
    int counter = 0;
    int halfpair = 0;
    /* 部分匹配标记 */
    char ch;
    printf("Please input chars (# for exit):");
    while((ch = getchar()) != '#')
    {
        switch(ch){
            case 'e':
                halfpair = 1;
                break;
                /* 字符 e 匹配标记*/
            case 'i':
                if(halfpair == 1){
                    counter++;
                    halfpair = 0;
                }
                /* 匹配标记为 1 表明前一个字符e已经匹配 ，此时 i匹配则计数，并
                 * 清除部分匹配标记。*/
                break;
            default:
                halfpair = 0 ;
                /* 无论字符e 是否匹配，字符非 e，i 均可以清空部分匹配标记*/
        }
    }
    printf("\nTotally exist %d \'ei\' in all char!\n",counter);
    printf("Done\n");
    return 0;
}

