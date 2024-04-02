/*************************************************************************
	> File Name: 29.HZOJ-137.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 22时50分18秒
 ************************************************************************/

#include<stdio.h>
int main() {
    
    int n;
    scanf("%d", &n);
    char c = 'A';

    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("%c", c);
            c += 1;
        }
        printf("\n");
    }



    return 0;
}
