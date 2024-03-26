/*************************************************************************
	> File Name: 11.digit.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 15时27分39秒
 ************************************************************************/

#include<stdio.h>

void printf_digit(int x){
    for (int i = 31; i >= 0; i--){
        printf("%c", (x & (1 << i)) ? '1' : '0' );
        //1<<i,将1左移i位即第i位为1
    }
    printf("\n");
    return;
}

int main(){

    int a = 5, b = 3;
    printf("a = "); printf_digit(a);
    printf("b = "); printf_digit(b);
    printf("a & b = "); printf_digit(a & b);
    printf("a | b = "); printf_digit(a | b);
    printf("a ^ b = "); printf_digit(a ^ b);
    //^的扩展应用，交换两个变量的值
    a ^= b; b ^= a; a ^= b;
    printf("a = "); printf_digit(a);
    printf("b = "); printf_digit(b);  
    printf("~a = "); printf_digit(~a);
    printf("(~b + 1) = %d\n", ~b + 1);
    
    //获得二进制表示法最后一位的1
    int x;
    printf("please input a number : ");
    scanf("%d", &x);
    printf("\n");
    printf("x = "); printf_digit(x);
    printf("-x & x = "); printf_digit(-x & x);
    //左移和右移
    int f = 1279813123, g = -f;
    printf("f = "); printf_digit(f);
    printf("g = "); printf_digit(g);
    printf("f << 1 = "); printf_digit(f << 1);
    printf("f >> 1 = "); printf_digit(f >> 1);
    
    printf("g << 1 = "); printf_digit(g << 1);
    printf("g >> 1 = "); printf_digit(g >> 1);

    //<< 相当于*2,，>> 相当于/2
    printf("a = %d, b = %d\n", a, b);
    printf("a << 1 = %d, b >> 1 = %d\n", a << 1, b >> 1);

    printf("-5 / 2 = %d, (-5) >> 1 = %d\n", -5 / 2, -5 >> 1);

    return 0;
}
