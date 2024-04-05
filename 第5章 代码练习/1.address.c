/*************************************************************************
	> File Name: 1.address.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 08时56分06秒
 ************************************************************************/

#include<stdio.h>

int main(){
    
    int a = 0;
    printf("%p\n", &a);
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    return 0;
}
