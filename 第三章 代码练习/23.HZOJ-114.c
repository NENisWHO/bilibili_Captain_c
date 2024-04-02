/*************************************************************************
	> File Name: 23.HZOJ-114.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 21时55分39秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    char s[10];

    scanf("%s", s);
    switch (s[0]) {
        case 'h': printf("He\n"); break;
        case 'l': printf("Li\n"); break;
        case 'c': printf("Cao\n"); break;
        case 'd': printf("Duan\n"); break;
        case 'w': printf("Wang\n"); break;
        default : printf("Not Here\n"); break;
    }

    return 0;
}
