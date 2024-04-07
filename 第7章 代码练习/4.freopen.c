/*************************************************************************
	> File Name: 4.freopen.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 16时30分29秒
 ************************************************************************/

#include<stdio.h>

int main() {

    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    //从input.txt读数据输出到output.txt中
    printf("hello world, stdout\n");
    char s[1000];
    while (scanf("%[^\n]", s) != EOF) {
        //从文件中读入一行到缓冲区时，scanf是集合的非"\n"匹配，
        //所以会残留行尾的"\n"，用getchar()吞掉即可
        getchar(); //从标准输入流中读入一个字符，吞掉“\n”
        printf("%s | hello world\n", s);
    }
    return 0;
}
