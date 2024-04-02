/*************************************************************************
	> File Name: 5.switch_case.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 10时18分38秒
 ************************************************************************/

#include<stdio.h>
int main() {

    int a;
    scanf("%d", &a);
    switch(a){
        case 1: printf("a = 1\n"); break;
        case 2: printf("a = 2\n"); break;
        case 3: printf("a = 3\n"); break;
        case 4: printf("a = 4\n"); break;
        default: printf("default value\n"); break;
    }

    return 0;
}
