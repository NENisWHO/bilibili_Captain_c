/*************************************************************************
	> File Name: 27.HZOJ-130.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 22时39分40秒
 ************************************************************************/

#include<stdio.h>
int main() {
  
    int m, n;
    double yu = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++) {
        yu += m;
        yu *= 1.00417;
    }
    printf("$%.2lf\n", yu);

    return 0;
}
