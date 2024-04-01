/*************************************************************************
	> File Name: 19.HZOJ-183.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 20时29分40秒
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if(n <= 0) return 0; 
    if(n == 1) return 1;
    if(n % 2 == 0) return 3 * f(n / 2) - 1;
    return 3 * f((n + 1) / 2) - 1; 
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
