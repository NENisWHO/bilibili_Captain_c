/*************************************************************************
	> File Name: 28.const.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月04日 星期四 10时06分19秒
 ************************************************************************/

#include<stdio.h>

int main() {

    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    int const *p2 = &a;
    printf("*p2 = %d\n", *p2);

    int n = 789, m = 1000;
    int *const p3 = &n;
    printf("*p3 = %d\n", *p3);
    *p3 += 3;
    printf("*p3 = %d\n", *p3);


    return 0;
}
