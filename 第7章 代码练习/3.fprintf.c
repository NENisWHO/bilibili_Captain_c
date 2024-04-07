/*************************************************************************
	> File Name: 3.fprintf.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 09时13分32秒
 ************************************************************************/

#include<stdio.h>

int main() {
    fprintf(stdout, "hello world\n");
    int a;
    fscanf(stdin, "%d", &a);
    fprintf(stderr, "a = %d\n", a);

    return 0;
}
