/*
第十六章：编程练习 3
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14
typedef struct{
    double length;
    double angle;
}polar;
/* 极坐标的结构定义 */
typedef struct{
    double x;
    double y;
}rectangular;
/* 直角坐标的结构 */
rectangular p_to_t(polar pc);
int main()
{
    polar pc;
    scanf("%lf %lf", &pc.length, &pc.angle);
    pc.angle = pc.angle*( PI / 180.0);
    /* 角度转换为弧度 */
    rectangular r = p_to_t(pc);
    /* 坐标系转换*/
    printf("%lf %lf\n", r.x, r.y);
}
rectangular p_to_t(polar pc){
    rectangular rect;
    rect.x = pc.length * cos(pc.angle);
    rect.y = pc.length * sin(pc.angle);
    /* 坐标系转换 */
    return rect;
}

