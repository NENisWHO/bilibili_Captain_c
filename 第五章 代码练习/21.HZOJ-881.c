/*************************************************************************
	> File Name: 21.HZOJ-881.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 15时01分02秒
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
    return ;
}

void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int main() {

    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("swap(&a, &b): %d %d\n", a, b);
    //注意看这里
    swap(&a, &a);
    printf("swap(&a, &a): %d %d\n", a, b);
    
    int c, d;
    scanf("%d%d", &c, &d);
    swap(&c, &d);
    printf("swap1(&c, &d): %d %d\n", c, d);
    swap1(&c, &c);
    printf("swap1(&c, &c): %d %d\n", c, d);
    return 0;
}


//^= 运算的bug
