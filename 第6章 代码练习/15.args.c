/*************************************************************************
	> File Name: 15.args.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 10时50分52秒
 ************************************************************************/

#include<stdio.h>

#define D_VLA(a, val) (#a[0] ? a : val)
#define test_func(a, b, c) \
    __test_func(D_VLA(a, 91), D_VLA(b, 23), D_VLA(c, 123))

void __test_func(int a, int b, double c) {
    printf("a = %d, b = %d, c = %lf\n", a, b, c);
    return ;
}


int main() {
    test_func(,,);
    test_func(1,,);
    test_func(,2,);
    test_func(,,3);
    test_func(1,2,3);

    return 0;
}
