/*************************************************************************
	> File Name: 24.test1.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 21时47分35秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int a, b , c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char *p = (char *)&n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("n = %u\n", n);
    return 0;
}
