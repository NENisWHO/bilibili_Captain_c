/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 19时41分14秒
 ************************************************************************/

#include<stdio.h>

int main() {

    freopen("/dev/pts/3", "w", stdout);
    char s[100];
    while(scanf("%s", s) != EOF) {
        printf("from pts3 : %s\n", s);
    }

    return 0;
}
