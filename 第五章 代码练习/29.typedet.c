/*************************************************************************
	> File Name: 29.typedet.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月04日 星期四 10时26分24秒
 ************************************************************************/

#include<stdio.h>

typedef long long ll;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test() {
    printf("hello function pointer\n");
    return ;
}

int main() {
    ll a;
    int arr[5][10];
    Arr2Dim10 p = arr;
    Func p2 = test;
    p2();
    return 0;
}
