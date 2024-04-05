/*************************************************************************
	> File Name: 16.goto_if_else.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 20时52分52秒
 ************************************************************************/

#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({goto if_stmt; 1;});
    //小括号将{}转化成有返回值的表达式，{}将多条语句整成一条符合语句
    !(n % 2 == 0) && ({goto else_stmt; 1;});

if_stmt:
    printf("n is even\n");
    goto if_end;
else_stmt:
    printf("n is odd\n");
if_end:
    return 0;
}
