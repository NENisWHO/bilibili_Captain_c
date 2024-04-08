/*************************************************************************
	> File Name: 1.fprintf.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月08日 星期一 08时18分23秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp = fopen("data.txt", "w");
    if(fp == NULL) {
        printf("open file error\n");
        exit(1);
    }
    fprintf(fp, "hello world\n");
    int a = 123, b = 567;
    fprintf(fp, "a = %d, b = %d\n", a, b);
    fclose(fp);
    return 0;
}
