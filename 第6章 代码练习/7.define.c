/*************************************************************************
	> File Name: 7.define.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 07时50分14秒
 ************************************************************************/

#include<stdio.h>
#define PI 3.14159265
#define S(a, b) a * b
#define P(a) { \
    printf("define P: %d\n", a); \
}


int main() {
    printf("PI = %lf\n", PI);
    printf("S(3, 4) = %d\n", S(3, 4));
    printf("S(3 + 7, 4) = %d\n", S(3 + 7, 4));
    S(int, p); 
    int n = 123;
    p = &n;
    P(*p);
    return 0;
}
