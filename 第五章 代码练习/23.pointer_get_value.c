/*************************************************************************
	> File Name: 23.pointer_get_value.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 21时09分58秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0x61626364;
    char *p = (char *)&n;
    printf("n = %x, n = %d, n = %c\n", n, n, n);
    printf("&n = %p, p = %p\n", &n, p);
    printf("*(p + 0) = %c, (p + 0) = %p\n", *(p + 0), (p + 0));
    printf("*(p + 1) = %c, (p + 1) = %p\n", *(p + 1), (p + 1));
    printf("*(p + 2) = %c, (p + 2) = %p\n", *(p + 2), (p + 2));
    printf("*(p + 3) = %c, (p + 3) = %p\n", *(p + 3), (p + 3));
    
    printf("p[0] = %c\n", p[0]);
    printf("p[1] = %c\n", p[1]);
    printf("p[2] = %c\n", p[2]);
    printf("p[3] = %c\n", p[3]);
    //指针p为char型每次取一个字节的数据
    return 0;
}
