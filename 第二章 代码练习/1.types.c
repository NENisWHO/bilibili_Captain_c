
#include <stdio.h>
#include <inttypes.h>


int main(void){
	int a = 123, b = 97, c ,d;
	c = 100062;
	d = 9651;
	printf("%d %d %d %d\n", a, b, c, d);
	a = 2147483648 + 1;
	printf("%d\n", a);
	printf("INT32_MIN = %d \n", INT32_MIN);
	printf("INT32_MAX = %d \n", INT32_MAX);	
	long long e; // 不是长整形e的错，而是编译器默认整型相加了
	e = INT32_MAX + 1ll;	//解决，将一个改成ll型
	printf("%lld\n",e);
	float f = e + 0.1;
	double ff = e + 0.123456789;
	printf("float:%f\n", f);
	printf("double:%.9lf\n", ff);//默认输出小数点后6位，
	char g = 'a';
	printf("g = %c\n",g);
	printf("g = %d\n",g); //字符型可以用整型对待
	printf("g = %c\n", g + 5);
	printf("48 = %c\n", 48);//用%c解释48为字符0
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long long) = %lu\n", sizeof(long long));
	printf("sizeof(float) = %lu\n", sizeof(float));
	printf("sizeof(double) = %lu\n", sizeof(double));
	printf("sizeof(char) = %lu\n", sizeof(char));//%lu表示输出无符号长整型数
	return 0;
}
