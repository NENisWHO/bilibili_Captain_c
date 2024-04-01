/*************************************************************************
	> File Name: 5.func_delcare.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 09时55分16秒
 ************************************************************************/

#include<stdio.h>

int a_func(int);
int b_func(int);

int main(){
    a_func(1);
    b_func(2);

    return 0;
}

int a_func(int x){
    switch (x){
        case 1: return b_func(x);
        case 2: printf("2 * x = %d\n", 2 * x); break;
    }
    return 0;
}

int b_func(int x){
    switch(x){
        case 1: printf("3 * x = %d\n", 3 * x); break;
        case 2: return a_func(x);
    }
    return 0;
}
