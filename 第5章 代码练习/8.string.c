/*************************************************************************
	> File Name: 8.string.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 19时53分54秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(0));


    char str1[10] = "abc";
    printf("str1 = %s\n", str1);
    
    //str1 = "def"; 不行，给字符串数组赋值只有定义字符串时好用
    strcpy(str1, "def");
    printf("str1 = %s\n", str1);

    char str2[] = "hello\0 world"; //strlen 统计到\0结束
    printf("strlen(str2) = %lu\n", strlen(str2));
    printf("sizeof(str2) = %lu\n", sizeof(str2));
    printf("str2 = %s\n", str2);
    str2[5] = 'A';
    printf("str2 = %s\n", str2);
    
    char str3[] = "abcdef", str4[] = "abc";
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));
    str3[3] = '\0';
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));
    
    
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;

    }
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, 0, sizeof(int) * 10); 
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, -1, sizeof(int) * 10); 
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, 2, sizeof(int) * 10); 
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d (%x)\n", i, arr[i], arr[i]);
    }
    
    
    

    return 0;
}
