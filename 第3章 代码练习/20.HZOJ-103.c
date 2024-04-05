/*************************************************************************
	> File Name: 20.HZOJ-103.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 21时41分20秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    int a, b;
    scanf("%d%d", &a, &b);
    //if (a % b) printf("NO\n");
    //else printf("YES\n");
    
    printf("%s\n", a % b == 0 ? "YES" : "NO"); 

    return 0;
}
