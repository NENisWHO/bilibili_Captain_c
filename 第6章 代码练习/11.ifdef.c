/*************************************************************************
	> File Name: 11.ifdef.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 09时36分19秒
 ************************************************************************/

#include<stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif

int main() {
    printf("a = %d\n", a);

    return 0;
}
