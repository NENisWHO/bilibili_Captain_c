/*************************************************************************
	> File Name: 13.HZOJ-464.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 19时58分06秒
 ************************************************************************/

#include<stdio.h>

int is_leap_year(int x) {
    if(x % 4 == 0 && x % 100 != 0) return 1;
    if(x % 400 == 0) return 1;
    return 0;
}

int main(){
    
    int a, b, ans = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++){
        ans  += is_leap_year(i);
    }
    printf("%d\n", ans);
    return 0;
}
