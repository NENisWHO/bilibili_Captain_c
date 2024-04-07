/*************************************************************************
	> File Name: 26.funny_linklist.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 10时22分10秒
 ************************************************************************/

#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

//编程技巧：整个系统中一定有一个地址为0->NULL；如果我们从0号地址开始
//开辟一个数据变量，那末相应字段所存储的位置就是我们要的偏移量。
#define offset(T, d) ((size_t)(&(((T *)(0))->d)))

//知道字段地址反推出数据类型的首地址[&d-offset]
//addr：字段的地址  T：类型 d：字段的名称
#define start(addr, T, d) ((T *)(((void *)addr) - offset(T, d)))


enum DataType {
    A_Type,
    B_Type,
    C_Type,
    MAX_Type
};

typedef struct Link {
    enum DataType type;
    struct Link *next;
}Link;

struct A {
    int x, y;
    Link l;
};

Link *getDataA() {
    struct A *a = (struct A *)malloc(sizeof(struct A));
    a->x = 3, a->y = 4;
    a->l.next = NULL;
    a->l.type = A_Type;
    return &(a->l);
}

void output_A(Link *p) {
    struct A *a = start(p, struct A, l);
    printf("struct A : x = %d, y = %d\n", a->x, a->y);
    return ;
}

struct B {
    int a;
    Link l;
    double b;
};

Link *getDataB() {
    struct B *b = (struct B *)malloc(sizeof(struct B));
    b->a = 100, b->b = 45.3;
    b->l.next = NULL;
    b->l.type = B_Type;
    return &(b->l);
}

void output_B(Link *p) {
    struct B *b = start(p, struct B, l);
    printf("struct B : a = %d, b = %lf\n", b->a, b->b);
    return ;
}

struct C {
    char c;
    Link l;
    const char *s;
    int t;
};

Link *getDataC() {
    struct C *c = (struct C *)malloc(sizeof(struct C));
    c->c = 'x', c->s = "struct C", c->t = 99;
    c->l.next = NULL;
    c->l.type = C_Type;
    return &(c->l);
}

void output_C(Link *p) {
    struct C *c = start(p, struct C, l);
    printf("struct C : c = %c, s = %s, t = %d\n", c->c, c->s, c->t);
    return ;
}

int main() {
    #define MAX_OP 10
    Link head, *p = &head;
    for (int i = 0; i < MAX_OP; i++) {
        switch (rand() % 3) {
            case 0: p->next = getDataA(); break;
            case 1: p->next = getDataB(); break;
            case 2: p->next = getDataC(); break;
        }
        p = p->next;
    }
    for (p = head.next; p; p = p->next) {
        switch (p->type) {
            case A_Type: output_A(p); break;
            case B_Type: output_B(p); break;
            case C_Type: output_C(p); break;
            default : break;
        }
    }

    return 0;
}
