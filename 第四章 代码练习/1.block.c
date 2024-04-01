/*************************************************************************
	> File Name: 1.block.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 08时26分21秒
 ************************************************************************/

#include<stdio.h>
int main() {

    int a = 1, b = 2;
    for(int i = 0; i < 5; i++) {
        int a = 3, b = 4;
        printf("in: %d, %d \n", a, b);
    }

    printf("out: %d, %d \n", a, b);
    return 0;
}
