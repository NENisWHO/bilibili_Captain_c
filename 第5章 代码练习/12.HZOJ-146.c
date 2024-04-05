/*************************************************************************
	> File Name: 12.HZOJ-146.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 21时03分41秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char s[55];
    scanf("%s", s);
    for(int i = 0; s[i]; i++) {
        if(islower(s[i])){
            if (s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
        if(isupper(s[i])){
            if (s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
        /*
        if(s[i] <= 'z' && s[i] >= 'a'){
            if (s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
        if(s[i] <= 'Z' && s[i] >= 'A'){
            if (s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
        */
