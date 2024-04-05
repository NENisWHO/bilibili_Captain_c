/*************************************************************************
	> File Name: 4.para.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 09时34分19秒
 ************************************************************************/

#include<stdio.h>

void test(int a, int b){
    a += 1;
    b *= 2;
    printf("test: a = %d, b = %d\n", a, b);
    return ;
}

int main() {
    int a = 1, b = 2;
    test(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    test(b, a);

    return 0;
}
