/*************************************************************************
	> File Name: 25.funny_linklist.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 09时23分22秒
 ************************************************************************/

#include<stdio.h>


#ifdef OFFSET1
//方法一：
//T：类型 d：类型中的字段 
//offset：数据类型的字段地址与类型的起始地址的偏移量
//这个方法在计算偏移量时额外开辟了一个数据变量，对空间有点浪费
#define offset(T, d) ({ \
    T t; \
    (void *)(&t.d) - (void *)(&t);})    
#else

//编程技巧：整个系统中一定有一个地址为0->NULL；如果我们从0号地址开始
//开辟一个数据变量，那末相应字段所存储的位置就是我们要的偏移量。
#define offset(T, d) ((size_t)(&(((T *)(0))->d)))

//知道字段地址反推出数据类型的首地址[&d-offset]
//addr：字段的地址  T：类型 d：字段的名称
#define start(addr, T, d) ((T *)(((void *)addr) - offset(T, d)))

#endif


struct A {
    int a;
    char b;
    double c;
};

int main() {
    printf("offset(A, a) = %lu\n", offset(struct A, a));
    printf("offset(A, b) = %lu\n", offset(struct A, b));
    printf("offset(A, c) = %lu\n", offset(struct A, c));

    struct A a;
    printf("&a = %p\n", &a);
    printf("strat(&a.a, A, a) = %p\n", start(&a.a, struct A, a));
    printf("strat(&a.b, A, b) = %p\n", start(&a.b, struct A, b));
    printf("strat(&a.c, A, c) = %p\n", start(&a.c, struct A, c));


    return 0;
}
