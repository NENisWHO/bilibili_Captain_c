/*************************************************************************
	> File Name: 8.getchar.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月07日 星期日 19时56分36秒
 ************************************************************************/

#include<stdio.h>

#ifdef GETCHAR
int main() {

    int a, b;
    scanf("%d%d", &a, &b);
    getchar();
    char c;
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    return 0;
}
#endif

#ifdef FFLUSH
int main() {

    int a, b;
    scanf("%d%d", &a, &b);
    fflush(stdin);//输入缓冲区冲刷
    char c;
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    return 0;
}
#endif

