#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 50; b = 10;

	p_a = &a;	//aのアドレスを求める
	p_b = &b;	//bのアドレスを求める

	c = *p_a + *p_b;	//ポインタ変数を使って加算

	printf("%d+%d=%d\n", a, b, c);
}