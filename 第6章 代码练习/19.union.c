/*************************************************************************
	> File Name: 19.union.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 16时29分23秒
 ************************************************************************/

#include<stdio.h>

union A {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int number;
};

#define P(a, format) { \
    printf("%s = " format"\n", #a, a); \
}

int main() {
    union A a;
    a.number = 0x61626364;
    P(a.number, "%x");
    P(a.bytes.byte1, "%x");
    P(a.bytes.byte2, "%x");
    P(a.bytes.byte3, "%x");
    P(a.bytes.byte4, "%x");
    P(sizeof(union A), "%lu");
    P(&a.number, "%p");
    P(&a.bytes.byte1, "%p");
    P(&a.bytes.byte2, "%p");
    P(&a.bytes.byte3, "%p");
    P(&a.bytes.byte4, "%p");
    return 0;
}
