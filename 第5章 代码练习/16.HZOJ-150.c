/*************************************************************************
	> File Name: 16.HZOJ-150.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 21时41分24秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int arr[205][205];
int n, m, a;

int main() {

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = j, y = n - i -1;
            scanf("%d", &a);
            arr[x][y] = a;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
