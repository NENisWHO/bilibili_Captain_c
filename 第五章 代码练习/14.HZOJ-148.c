/*************************************************************************
	> File Name: 14.HZOJ-148.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 21时19分39秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {

    char s[55];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        s[i] ^= s[j];
        s[j] ^= s[i];
        s[i] ^= s[j];
    }
    printf("%s\n", s);

    return 0;
}

    /*
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
    }
    printf("%s\n", s);
    */
