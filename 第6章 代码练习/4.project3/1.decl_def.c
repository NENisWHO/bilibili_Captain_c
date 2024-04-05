/*************************************************************************
	> File Name: 4.decl_def.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月05日 星期五 15时04分48秒
 ************************************************************************/

#include<stdio.h>
 
int add(int, int); //函数声明

extern int c, d; //在main外加extern声明变量

 int main() {
    int a = 1, b = 2;//在main函数里的是定义变量
     printf("a + b + c + d = %d\n", a + b + c + d);
     return 0;
 }

//函数定义
 int add(int a, int b){
     
     return a + b;
 }
