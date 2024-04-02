/*************************************************************************
	> File Name: 14.test4.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 17时21分48秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf^%lf = %lf\n", x, (1.0/3.0), pow(x, (1.0/3.0)));
    return 0;
}
