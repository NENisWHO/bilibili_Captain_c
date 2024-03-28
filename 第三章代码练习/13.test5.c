/*************************************************************************
	> File Name: 13.test5.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 16时48分43秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    int a = 1, b = 1, c;
    for(int i = 0; i < 20; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    for (int i = 0, f1 = 1, f2 = 1; i < 20; i++, f2 = f1 + f2, f1 = f2 - f1 ){
        printf("%d ", f1);
    }
    printf("\n");
    return 0;
}
