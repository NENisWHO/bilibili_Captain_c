/*************************************************************************
	> File Name: 9.print_100.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 15时49分26秒
 ************************************************************************/

#include<stdio.h>


int cnt = 100;

int main() {
    int n = cnt;
    cnt -= 1;
    if(n == 1){
        printf("%d\n", n);
        return 0;
    }
    main();
    printf("%d\n",n); 
    return 0;
}
