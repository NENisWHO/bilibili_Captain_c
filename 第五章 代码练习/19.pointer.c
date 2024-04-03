/*************************************************************************
	> File Name: 19.pointer.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 14时25分56秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int * p1;
    double * p2;
    char * p3;
    int a = 123;
    double b = 12.3;
    char c = 'a';
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("p1 = %p, &a = %p, *p1 = %d\n", p1, &a, *p1);
    printf("p2 = %p, &b = %p, *p2 = %f\n", p2, &b, *p2);
    printf("p3 = %p, &c = %p, *p3 = %c\n", p3, &c, *p3);

    return 0;
}
