#include<stdio.h>
main()
{
	int a = 5, b = 3;
	printf("入れ替え前a=%d,b=%d\n", a, b);
	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;
	printf("入れ替え後a=%d,b=%d\n", a, b);
}