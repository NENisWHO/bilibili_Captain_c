/*************************************************************************
	> File Name: 24.HZOJ-118.c
	> Author: 
	> Mail: 
	> Created Time: 2024年03月27日 星期三 22时02分12秒
 ************************************************************************/

#include<stdio.h>

int main() {
    
    int y;
    char *name;
    scanf("%d", &y);
    
    switch (((y - 1900) % 12 + 12) % 12) {
        case 0: name = "rat"; break;
        case 1: name = "ox"; break;
        case 2: name = "tiger"; break;
        case 3: name = "rabbit"; break;
        case 4: name = "dragon"; break;
        case 5: name = "snake"; break;
        case 6: name = "horse"; break;
        case 7: name = "sheep"; break;
        case 8: name = "mokey"; break;
        case 9: name = "rooster"; break;
        case 10: name = "dog"; break;
        case 11: name = "pig"; break;

    }
    printf("%s\n", name);
    return 0;
}
