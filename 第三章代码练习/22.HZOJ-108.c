

#include<stdio.h>

int main() {

    char s[10];
    scanf("%c", s);
    double m, n;
    scanf("%lf%lf", &m, &n);
    printf("%.2lf\n", s[0] == 'r' ? m * n : m * n / 2);

    return 0;
}
