/*************************************************************************
	> File Name: 18.goto_for.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 21时17分58秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    int n, i = 0;
    scanf("%d", &n);
    

    for_1:
        goto for_2;
    for_2:
        if (i <= n) goto for_4;
        else goto for_end;
    for_3:
        i++;
        goto for_2;
    for_4:
        if(i % 3 == 0) goto for_3;
        printf("%d ", i);
        goto for_3;
    for_end:
        printf("\n");
        return 0;
}
