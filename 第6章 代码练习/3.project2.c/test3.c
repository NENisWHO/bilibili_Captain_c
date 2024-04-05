/*************************************************************************
	> File Name: test3.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月05日 星期五 14时24分40秒
 ************************************************************************/

#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 123, b = 456;
    printf("a + b = %d\n", a + b);
    printf("add(%d, %d) = %d\n", a, b, add(a, b));

    return 0;
}
