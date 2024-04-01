/*************************************************************************
	> File Name: 15.HZOJ-466.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 20时10分43秒
 ************************************************************************/

#include<stdio.h>

int is_palindrome(int x){
    int z = x, y = 0;
    while(x){
        y = x % 10 + y * 10;
        x = x / 10;
    }
    return z == y;
}

int main() {

    int n, ans = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
