/*************************************************************************
	> File Name: 6.f_f.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 10时15分44秒
 ************************************************************************/

#include<stdio.h>

int f(int n){
    
    printf("in f(%d)\n", n);
    int ret;
    if(n == 1) ret = 1;
    else ret = n * f(n-1);
    printf("out f(%d)\n", n);
    return ret;
}

int main() {

    int n;
    while(~scanf("%d", &n)){
        printf("f(%d) = %d \n", n, f(n));
    };
    return 0;
}
