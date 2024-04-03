/*************************************************************************
	> File Name: 20.function_with_pointer.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月03日 星期三 14时40分11秒
 ************************************************************************/

#include<stdio.h>

void add_once(int *p){
    *p += 1;
    return ;
}

void f(int n, int *sum_addres) {
    *sum_addres = (1 + n) * n / 2;
    return ;
}

void output(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    return ;
}

int main() {
   
    //1.通过参数更改实参的值
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
   
    //2.传出参数
    int n = 10, sum;
    f(n, &sum);
    printf("sum = %d\n", sum);
    
    //3.接受数组指针
    int arr[10] = {1, 2 ,3, 4, 5, 6, 7 ,8 , 9, 0};
    output(arr, 10);

    return 0;
}
