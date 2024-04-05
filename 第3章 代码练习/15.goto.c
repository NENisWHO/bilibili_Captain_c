/*************************************************************************
	> File Name: 15.goto.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 20时45分00秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    goto lab_1;
    printf("hello\n");
 lab_1:
    printf("no hello\n");
//----------------//
    
    goto lab_2;
    int a = 2, b = 3;
    scanf("%d%d", &a, &b);
lab_2:
    printf("%d\n", a * b);

    return 0;
}
