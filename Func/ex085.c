#include<stdio.h>
void cat(char* p_a, *p_b);
main()
{
	char a[1000], b[1000];
	float* p_a, * p_b;
	printf("”z—ña>");
	scanf("%s\n", a);
	printf("”z—ñb>");
	scanf("%s\n", b);
	cat(a, b);
	printf("”z—ña>%s", a);
}
void cat(char *p_a,*p_b)
{
	while (*p_a != '\0')
	{
		p_a++;
	}
	while (*p_b != '\0')
	{
		*p_a = *p_b;
		p_a++;
	}
}