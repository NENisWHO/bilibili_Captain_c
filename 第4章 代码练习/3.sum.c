/*************************************************************************
	> File Name: 3.sum.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 09时17分10秒
 ************************************************************************/

#include<stdio.h>

int sum(int a1, int r, int d) {
    int n = (r - a1) / d + 1; //项数：一共多少项
    int an = a1 + (n - 1) * d; //尾项
    return (a1 + an) * n / 2;
}

int main() {
    printf("%d %d %d\n",
        sum(1, 100, 1),
        sum(1, 200, 2),
        sum(26, 36999, 47)
    );
    return 0;
}
