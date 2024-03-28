/*************************************************************************
	> File Name: 12.for.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 16时39分25秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("program 1:");
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");

    printf("program 2:");
    for(int i = 0; i < n; i++){
        printf("%d ", i + 1);
    }
    printf("\n");

    printf("program 3:");

    for(int i = 0;; i += 1){ //
        if (i == n) break;
        printf("%d ", i + 1);
    }
    printf("\n");
    return 0;
}
