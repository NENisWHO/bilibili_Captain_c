/*************************************************************************
	> File Name: 3.address_len.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 09时16分56秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int a;
    double b;
    char c;
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeof(double &) = %lu\n", sizeof(&b));
    printf("sizeof(char &) = %lu\n", sizeof(&c));


    return 0;
}
