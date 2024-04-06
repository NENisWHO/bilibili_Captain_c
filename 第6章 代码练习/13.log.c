/*************************************************************************
	> File Name: 13.log.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 10时06分27秒
 ************************************************************************/

#include<stdio.h>

#define DEBUG 1
#define ERROR 2
#define FATEL 3
#define NO_LOG 4

#define LOG(level) \
if (level >= LOG_LEVEL) \
printf("[%s: %d]", __FILE__,__LINE__), \
printf


int main() {

    int a = 10;
    printf("a = %d\n", a);
    printf("hello world\n");
    LOG(DEBUG)("hello world, DEBUG\n");
    LOG(ERROR)("hello world, ERROR\n");
    LOG(FATEL)("hello world, FATEL\n");
    LOG(NO_LOG)("hello world, NO_LOG\n");

    return 0;
}
