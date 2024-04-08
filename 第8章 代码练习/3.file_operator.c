/*************************************************************************
	> File Name: 3.file_operator.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月08日 星期一 15时27分58秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdio.h>
const char *file_name = "data3.txt";
int n = 0;
#define MAX_OP 10000
int arr[MAX_OP + 5] = {0};

//读取数组中的数据
void output_arr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return ;
} 

//写入文件中
void output_to_file(int *arr, int n) {
    FILE *fp = fopen(file_name, "a");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);
    return ;
}

//从文件中读取数据
int read_from_file(int *arr) {
    int i = 0; //统计读取了多少数据
    FILE *fp = fopen("data3.txt", "r");
    if(fp == NULL) return 0;
    while(fscanf(fp, "%d", arr + i) != EOF) {
        i += 1;
    }
    fclose(fp);
    return i;
}

//清空文件数据
void clear_file() {
    FILE *fp = fopen(file_name, "w");
    fclose(fp);
    return ;
}


int output_test() {
    srand(time(0));
    for(n = 0; n < 10; n++){
        arr[n] = rand() % 100;
    }
    output_arr(arr, n);
    output_to_file(arr, n);
    return 0;
}

int read_test() {
    n = read_from_file(arr);
    output_arr(arr, n);
    printf("total read %d number\n", n);
    return 0;
}

int main() {
    clear_file();
    return 0;
}


