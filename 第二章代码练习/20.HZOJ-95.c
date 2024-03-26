/*************************************************************************
	> File Name: 20.HZOJ-95.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 19时39分23秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int shi, ge;
    shi = n / 10;
    ge = n % 10;
    printf("%d\n", ge * 10 + shi);
    return 0;
}
