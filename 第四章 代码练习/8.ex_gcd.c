/*************************************************************************
	> File Name: 8.ex_gcd.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 15时33分24秒
 ************************************************************************/

#include<stdio.h>

int x, y, nx, ny;

int ex_gcd(int a, int b) {
    if(b == 0) {
        x = 1, y = 0;
        return a; //
    }    
    int c = ex_gcd(b, a % b);//c最大公约数
    nx = y;//a前面的系数
    ny = x - a / b * y; //x - ky  = a % b  || b前面的系数
    x = nx, y = ny;
    return c;
}

int main() {

    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        int c = ex_gcd(a, b);
        printf("%d * %d + %d * %d = %d \n", a, x, b, y, c);
    }
    return 0;
}
