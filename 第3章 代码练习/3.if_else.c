/*************************************************************************
	> File Name: 3.if_else.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 09时50分58秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);

    if(a < b) printf("YES\n");
    else printf("NO\n");
    
    if(a < b){
        c = a * b;
        printf("c = %d\n", c);
    }
    
    return 0;
}
