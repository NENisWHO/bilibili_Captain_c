/*************************************************************************
	> File Name: 10.d0while.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 16时18分09秒
 ************************************************************************/

#include<stdio.h>
int main() {
    
    int n, m = 0;
    scanf("%d", &n);
    if(n == 0) m = 1;
    while(n){
        n = n / 10;
        m += 1;
    }
    printf("digits: %d\n", m);

    int a, b = 0;
    scanf("%d", &a);
    do{
        a = a / 10;
        b += 1;
    }while(a);
    printf("digits: %d\n", b);
    return 0;
}
