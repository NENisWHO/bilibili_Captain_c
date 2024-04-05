/*************************************************************************
	> File Name: 11.main_2.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 19时33分30秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[], char **env){
   
   // for(char **p = env; p[0]; p += 1){

   // }

    printf("argc = %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    for(char **p = env; p[0]; p += 1){
        printf("%s\n", p[0]);
    }
    
    return 0;
}
