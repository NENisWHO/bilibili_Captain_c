/*************************************************************************
	> File Name: 7.gcd.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 14时34分52秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    printf("a > b\n");
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));
    }    

    return 0;
}
