/*************************************************************************
	> File Name: 22.bit.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 21时16分23秒
 ************************************************************************/

#include<stdio.h>


#define P(a, format) { \
    printf("%s = " format"\n", #a, a); \
}

struct A{
    unsigned int a:1;
    unsigned int b:2;
    unsigned int c:3;
};

int main() {
    P(sizeof(struct A), "%lu");
    struct A obj;
    obj.a = 15;
    obj.b = 15;
    obj.c = 13;
    P(obj.a, "%d");
    P(obj.b, "%d");
    P(obj.c, "%d");
    return 0;
}
