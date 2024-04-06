/*************************************************************************
	> File Name: 16.hahaha.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 11时55分36秒
 ************************************************************************/

#include<stdio.h>

int is_prime(int x) {
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        if( !is_prime(i)) continue;
        printf("%d is prime\n", i);
    }
    return 0;
}
