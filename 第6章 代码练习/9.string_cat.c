/*************************************************************************
	> File Name: 9.string_cat.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 08时25分24秒
 ************************************************************************/

#include<stdio.h>

#define STR(n) #n
#define RUN(func) { \
    func; \
    printf("%s done\n", #func); \
}

void f1() {
    printf("this is f1\n");
    return ;
}

void test2(int a, int b) {
    printf("this is test2: %d, %d\n", a, b);
    return ;
}

#define CAT(a,b) a##b

int main() {
    printf("%s\n", STR(hello));
    RUN(f1());
    RUN(test2(2, 3));

    int n10 = 123, n11 = 456;
    CAT(n, 10) = 789;//连接 n10 = 789
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}
