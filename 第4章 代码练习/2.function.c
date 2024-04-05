/*************************************************************************
	> File Name: 2.function.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 08时57分35秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double select_function(int flag, int x){
    switch(flag) {
        case 1: return sqrt(x); 
        case 2: return x * x;
        default: printf("error flag\n");
    }
    return 0;
}



int main() {
    
    printf("sqrt(%d) = %lf\n", 3, select_function(1, 3));
    printf("3 * 3 = %lf\n", select_function(2, 3));


    return 0;
}
