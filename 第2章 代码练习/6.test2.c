/*************************************************************************
	> File Name: 6.test2.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 08时39分29秒
 ************************************************************************/

#include<stdio.h>
int main(){


    char s[100] = "hello world";
    scanf("%[^\n]", s); //读入非换行符的所有字符
    int n;
    n = printf("%s", s);
    printf(" :  %d\n", n);


    return 0;
}
