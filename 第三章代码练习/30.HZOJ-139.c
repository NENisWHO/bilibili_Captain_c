/*************************************************************************
	> File Name: 30.HZOJ-139.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 22时55分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++){
        int a_num = 2 * n - 2 * abs(i - n + 1);
        int b_num = abs(i - n + 1);
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int j = 0; j < a_num; j++) printf("A");
        printf("\n");
    }
    return 0;
}
