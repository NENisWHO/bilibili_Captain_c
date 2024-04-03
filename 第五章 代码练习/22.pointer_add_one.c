/*************************************************************************
	> File Name: 22.pointer_add_one.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 16时26分57秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int a = 10;
    int *p1 = &a;
    printf("&a = %p\n", &a);
    printf("p1 + 0 = %p\n", p1 + 0);
    printf("p1 + 1 = %p\n", p1 + 1);
    printf("p1 + 2 = %p\n", p1 + 2);
    printf("*(p1 + 0) = %d\n", *(p1 + 0));
    printf("*(p1 + 1) = %d\n", *(p1 + 1));

    double b = 2.3;
    double *p2 = &b;
    printf("&b = %p\n", &b);
    printf("p2 + 0 = %p\n", p2 + 0);
    printf("p2 + 1 = %p\n", p2 + 1);
    printf("p2 + 2 = %p\n", p2 + 2);

    int arr[3] = {1, 2, 3};
    int *p3 = arr;
    for (int i = 0; i < 3; i++) {
        printf("p3 + %d = %p\n", i, p3 + i);
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    printf("\n");
    int (*p4)[10] = 0x0;
    int arr2[20][10];
    p4 = arr2;
    printf("p4 + 0 = %p\n", p4 + 0);
    printf("p4 + 1 = %p\n", p4 + 1);
    printf("p4 + 2 = %p\n", p4 + 2);
    //int *p5[10];
    //int *(*p6[10])[20];

    return 0;
}
