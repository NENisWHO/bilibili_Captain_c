/*************************************************************************
	> File Name: 17.goto_while.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 21时13分24秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int n, i = 1;
    scanf("%d", &n);
judge:
    if (i <= n) goto stmt;
    else goto while_end;
stmt:
    printf("%d ", i);
    i += 1;
    goto judge;
while_end:
    printf("\n");
    return 0;
}
