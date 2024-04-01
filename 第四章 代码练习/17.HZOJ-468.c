/*************************************************************************
	> File Name: 17.HZOJ-468.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 20时23分09秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}
