#include<stdio.h>
main()
{
	int i = 0, j = 0;
	printf("整数�@>");
	scanf("%d", &i);
	printf("整数�A>");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%dの方が%dより%d大きい\n", i, j, i - j);
	}
	if (i == j)
	{
		printf("%dと%dは等しい\n", i, j);
	}
	if (i < j)
	{
		printf("%dの方が%dより%d小さい\n", i, j, j - i);
	}
}