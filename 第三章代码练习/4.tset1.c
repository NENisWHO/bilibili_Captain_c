/*************************************************************************
	> File Name: 3.if-else.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 09时43分38秒
 ************************************************************************/

#include<stdio.h>
int main() {

    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("HEHE\n");
    }else if(n < 60) {
        printf("FALL\n");
    }else if(n < 75) {
        printf("MEDIUM\n");
    }else if(n <= 100){
        printf("GOOD\n");
    }else {
        printf("Grades are invalid\n");
    }
    return 0;
    //if (n == 0){
    //    printf("HEHE\n");
    //}else if(n > 0 && n < 60) {
    //    printf("FALL\n");
    //}else if(n >= 60 && n < 75) {
    //    printf("MEDIUM\n");
    //}else if(n >= 75 && n <= 100){
    //    printf("GOOD\n");
    //}else {
    //    printf("Grades are invalid\n");
    //}
    //return 0;
}
