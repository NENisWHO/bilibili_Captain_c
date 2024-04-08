/*************************************************************************
	> File Name: 2.file_access.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月08日 星期一 09时21分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void r_access() {
    
    FILE *fp = fopen("data.txt", "r");
    if( fp == NULL) {
        printf("[r]---failed to open file\n");
        exit(1);
    }
    char s[100];
    //fscanf(fp, "%s", s);
    //printf("s = %s\n", s);
    fscanf(fp, "%[^\n]", s);
    printf("s = %s\n", s);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    if( fp == NULL) {
        printf("[r]---failed to open file\n");
    }
    return ;
}

void file_name_new(char *file_name, int n) {
    for(int i = 0; i < n ;i++) {
        file_name[i] = rand() % 26 + 'a';
    }
    file_name[n] = 0;
    strcat(file_name, ".txt");
    return ;
}

void w_access() {
    
    FILE *fp = fopen("data.txt", "w");
    if( fp == NULL) {
        printf("[w]---failed to open file\n");
        exit(1);
    }
    fprintf(fp, "hahahah,woeld\n");
    fprintf(fp, "hello hangzhong\n");
    fclose(fp);
   
    char file_name[100] = {0};
    file_name_new(file_name, 10);
    printf("[w]---open file %s\n", file_name);
    fp = fopen(file_name, "w");
    fclose(fp);

    return ;
}

void r_plus_access() {
    FILE *fp = fopen("data.txt", "r+");
    if(fp == NULL ) {
        printf("[r+]---faild to open file\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%s", s);
    printf("[r+]---s = %s\n", s);
    fprintf(fp, "000000");
    fclose(fp);
    fp = fopen("temp.txt", "r+");
    if(fp == NULL) {
        printf("[r+]---faild to open file\n");
    }
    return ;
}

void w_plus_access() {
    FILE *fp = fopen("data.txt", "w+");
    if(fp == NULL) {
        printf("[w+]---failed to open file\n");
        exit(1);
    }
    fprintf(fp, "w+ahhaha, world\n");
    char s[100] = {0};
    fscanf(fp, "%s", s);
    printf("[w+]---s = %s\n", s);
    fclose(fp);
    char file_name[100] = {0};
    file_name_new(file_name, 10);
    printf("[w+]---open file %s\n", file_name);
    fp = fopen(file_name, "w+");
    fclose(fp);
    return ;
}


int main() {
    srand(time(0));
    r_access();
    printf("\n");
    w_access();
    printf("\n");
    r_plus_access();
    printf("\n");
    w_plus_access();
    printf("\n");
    return 0;
}

