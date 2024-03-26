#include <stdio.h>

int main(){

	int a, b, n;
	printf("normal scanf, input a, b:");
	n = scanf("%d%d", &a, &b);
	printf("a = %d, b = %d\n", a, b);
	printf("n = %d\n", n);
	printf("format scanf, input %%dabc%%d:");
	n = scanf("%dabc%d", &a, &b);//格式化输出
	printf("a = %d, b = %d\n", a, b);
	printf("n = %d\n\n", n);

	//多次读入数值
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	n = scanf("%d\n", &a);
	printf("n = %d\n", n);
	//当scanf的返回值为-1的时候说明读到了文件的末尾，EOF了
	//EOF = -1
	//手动输入时 ctrl+D (linux系统)文件结束输入操作
	printf("EOF = %d\n", EOF);

	return 0;
}
