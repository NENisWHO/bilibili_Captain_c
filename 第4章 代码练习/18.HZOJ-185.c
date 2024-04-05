/*************************************************************************
	> File Name: 18.HZOJ-185.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 20时26分28秒
 ************************************************************************/

#include<stdio.h>

long long f(int n){
    if(n == 1 || n == 2) return 1;
    return f(n - 1) + f(n -2);
}

int main() {
    
    int n;
    scanf("%d", &n);

    printf("%lld\n", f(n));
    return 0;
}
