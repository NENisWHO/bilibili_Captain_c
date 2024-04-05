/*************************************************************************
	> File Name: 10.HZOJ-144.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 20时35分11秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {

    char str[105];
    scanf("%s", str);
    int size = strlen(str);
    int cnt = 0;
    //for(int i = 0; i < size; i++) {
    //    if (str[i] == 'A') cnt++;
    //}
    for(int i = 0; str[i] != '\0'; i++) { //str[i] != '\0' 等价于 str[i] != 0 等价于 str[i]为真
        if (str[i] == 'A') cnt++;//等价于 cnt += (str[i] == 'A');
    }
    
    printf("%d\n", cnt);
    return 0;
}
