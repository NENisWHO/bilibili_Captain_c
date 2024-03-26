/*************************************************************************
	> File Name: 19.HZOJ-90.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 19时30分04秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge = a % 10;
    printf("%d\n", bai);
    printf("%d\n", shi);
    printf("%d\n", ge);

    return 0;
}
