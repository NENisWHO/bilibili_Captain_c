/*************************************************************************
	> File Name: 8.sprintf.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月26日 星期二 09时48分14秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char str[100] = "198.168.01.02";
    int a, b, c ,d;
    char str2[100];
    sscanf(str,"%d.%d.%d.%d", &a, &b, &c, &d);//从字符串中读取数据传给变量
    sprintf(str2, "%d:%d:%d:%d", a, b, c, d);
    //从变量中读取数据通过格式化字符串输出到str2中
    printf("str2 = %s \n", str2);
    
    return 0;
}
