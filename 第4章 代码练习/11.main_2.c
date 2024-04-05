/*************************************************************************
	> File Name: 11.main_2.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 19时33分30秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
     if(strcmp(argv[0], "./bilibili") != 0){
        printf("wrong call, please call: ./bilibili\n ");
        return 0;
    }
    printf("right call\n");
    printf("argc = %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    return 0;
}
