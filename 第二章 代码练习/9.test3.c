/*************************************************************************
	> File Name: 9.test3.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 10时03分04秒
 ************************************************************************/

#include<stdio.h>
int main(){

    char s[100], t[100];
    int n = 0;
    scanf("%[^\n]", s);
    n = sprintf(t, "| %s |", s);
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("| %s |\n", s); 
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    return 0;
}
