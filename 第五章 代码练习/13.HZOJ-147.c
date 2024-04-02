/*************************************************************************
	> File Name: 13.HZOJ-147.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 21时09分06秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char s[10005];

int main() {
    scanf("%s", s);
    if(s[strlen(s) - 1] % 2 == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

    return 0;
}
