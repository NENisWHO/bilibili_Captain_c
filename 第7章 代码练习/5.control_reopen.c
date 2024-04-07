/*************************************************************************
	> File Name: 5.control_reopen.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 16时43分44秒
 ************************************************************************/

#include<stdio.h>

int main() {

    char s[100];
    int i = 1;
    while(scanf("%[^\n]", s) != EOF) {
        getchar();
        fprintf(stderr, "%d test case\n", i++);
        printf("%s | hello\n", s);
    }

    return 0;
}
