/*************************************************************************
	> File Name: 23.HZOJ-102.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 19时55分45秒
 ************************************************************************/

#include<stdio.h>
int main() {

    double a, b, c, t;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    double rest = 1.0 - (1.0 / a + 1.0 / b) * t;
    double t1 = rest / (1.0 / a + 1.0 / b -1.0 / c);
    printf("%.2lf\n", t + t1);

    return 0;
}
