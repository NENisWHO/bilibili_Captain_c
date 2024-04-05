/*************************************************************************
	> File Name: 31.HZOJ-140.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月28日 星期四 07时53分41秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < 2 * n - 1; i++) {
        int a_num = (2 * n -1) - 2 * abs(i - n + 1);
        int b_num = abs(i - n + 1);
        char ch = 'A' + n - 1 - b_num;
        for (int i = 0; i < b_num; i++) printf(" ");
        for (int j = 0; j < a_num; j++) {
            printf("%c", ch);
        }
        
        printf("\n");
    }
    return 0;
}
