/*************************************************************************
	> File Name: 33.HZOJ.142.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月28日 星期四 08时27分48秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if(i % j) continue;
            flag = 0;
        }
        if (flag == 0) continue;
        int x = i, y = 0;
        while(x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y != i) continue;
        if (c) printf(" ");
        c +=  printf("%d", i);
    }
    printf("\n");
    return 0;
}
