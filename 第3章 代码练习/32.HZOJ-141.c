/*************************************************************************
	> File Name: 32.HZOJ-141.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月28日 星期四 08时07分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int n;
    scanf("%d", &n);
    char ch = 'A' + n;
    for (int i = 0; i < 2 * n + 1; i ++){
        int a_num = 2 * abs(i - n) + 1;
        int b_num = n -  abs(i - n);
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int j = 0; j < a_num; j++) {
            printf("%c", ch - abs(j - a_num / 2));
        }
        printf("\n");
    }


    return 0;
}
