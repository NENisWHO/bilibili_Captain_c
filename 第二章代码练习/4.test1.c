/*************************************************************************
	> File Name: 4.test1.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 08时03分02秒
 ************************************************************************/

#include<stdio.h>
int main(){

    int n, digit;
    scanf("%d", &n);
    digit = printf("%d", n);//printf的返回值为成功输出的字符数量
    printf(" has %d digit(s)\n", digit);
    return 0;
}
