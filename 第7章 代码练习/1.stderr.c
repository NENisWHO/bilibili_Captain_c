/*************************************************************************
	> File Name: 1.stderr.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 08时49分41秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    printf("hello world\n"); //stdout
    int n;
    scanf("%d", &n); //stdin
    perror("out of range\n"); //stderr
    return 0;
}
