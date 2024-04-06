/*************************************************************************
	> File Name: 12.if_function.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 09时54分20秒
 ************************************************************************/

#include<stdio.h>

#ifdef CLOCK
void test1() {
    printf("this is test1\n");
    return ;
}
#endif

#ifdef PHONE
void test2() {
    printf("this is test2\n");
    return ;
}
#endif


int main(){

#ifdef CLOCK
    test1();
#endif

#ifdef PHONE
    test2();
#endif

    return 0;
}
