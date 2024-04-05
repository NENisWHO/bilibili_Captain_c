/*************************************************************************
	> File Name: 9.while.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 15时45分19秒
 ************************************************************************/

#include<stdio.h>
int main() {

    int n, i = 0;
    scanf("%d", &n);
    printf("program 1:\n");
    while (i < n){
        printf("%d ", i + 1);
        i += 1;
    }
    printf("\n");
    
    printf("program 2:\n");
    i = 1;
    while (i <=  n){
        printf("%d ", i);
        i += 1;
    }
    printf("\n");
    
    printf("program 3:\n");
    i = 1;
    while (i <= n){
        printf("%d ", i++);
    }
    printf("\n");
    
    printf("program 4:\n");
    i = 0;
    while (i < n){
        printf("%d ", ++i);
    }
    printf("\n");
    
    return 0;
}
