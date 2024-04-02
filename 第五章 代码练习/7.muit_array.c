/*************************************************************************
	> File Name: 7.muit_array.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 19时24分31秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int b[3][4], cnt = 1 ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            b[i][j] = cnt;
            cnt += 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    cnt = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++){
            b[j][i] = cnt++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
