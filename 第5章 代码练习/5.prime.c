/*************************************************************************
	> File Name: 5.prime.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月02日 星期二 10时24分54秒
 ************************************************************************/

#include<stdio.h>

int prime[100];

void init_prime(int n) {
    prime[0] = prime[1] = 1; //1表示合数，0表示素数
    for (int i = 2;  i * i <= n; i++){//优化1：外层循环枚举到根号n即可
        if(prime[i]) continue;
        printf("%d is priem: ", i);
        for(int j = i * i; j <= n; j += i){//优化2：2 * i --> i * i
            prime[j] = 1;
            printf(" %d", j);
        }
        printf("\n");
    }
    return ;
}

int main(){
    init_prime(50);
    int x;
    while(scanf("%d", &x) != EOF){
        printf("prime[%d] = %d\n", x, prime[x]);
    }


}
