/*************************************************************************
	> File Name: 10.max_int.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月01日 星期一 16时29分14秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>

//变参函数--获得最大值
int max_int(int n, ...){
    va_list args;//va_list数据类型可以存储参数列表
    va_start(args, n);//va_start方法可以定位列表中的第一个参数
    int ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        int a = va_arg(args, int);//va_arg方法可以依次取出变参列表中的参数
        if(a > ans) ans = a;
    }
    va_end(args); //va_end 结束对整个变参列表的处理动作
    return ans;
}

int main() {
    
    printf("max_int(3, 8, 9, 7) = %d\n", max_int(3, 8, 9, 7));

    printf("max_int(2, 8, 7, 9) = %d\n", max_int(2, 8, 7, 9));
    return 0;
}
