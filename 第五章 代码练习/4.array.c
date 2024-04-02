/*************************************************************************
	> File Name: 4.array.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 09时40分07秒
 ************************************************************************/

#include<stdio.h>

void test1() {
    int a[10]; //下标：0 ~ n-1
    for(int i = 0; i < 10; i++){
        a[i] = 2 * i;
    }
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test2() {
    
    int n;
    printf("input n: ");
    scanf("%d", &n);
    int a[2 * n];

    for(int i = 0; i < 2 * n; i++){
        a[i] = 3 * i;
    }
    for(int i = 0; i < 2 * n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test3(){

    int a[5] = {0};
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test5(){
    int a[] = {1, 2, 3, 4 ,5 ,6 ,7};
    size_t size = sizeof(a) / sizeof(int);
    printf("sizeof(a) / sizeof(int) = %lu\n", size);
    printf("a = %p\n", a);
    printf("&a[0] = %p\n", &a[0]);
    for(int i = 1; i < size; i++){
        printf("a[%d] = %p\n", i, &a[i]);
    }
    return ;
}

int main() {
   // test1();
   // test2();   
   // test3();
    test5();
    return 0;
}
