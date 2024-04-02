/*************************************************************************
	> File Name: 2.and_or.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 09时04分02秒
 ************************************************************************/

#include<stdio.h>
int main() {

    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");
    !(a < b) && printf("NO\n");

    return 0;
}
