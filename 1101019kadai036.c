#include<stdio.h>
main()
{
	int i = 0, j = 0;
	printf("�����@>");
	scanf("%d", &i);
	printf("�����A>");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d�̕���%d���%d�傫��\n", i, j, i - j);
	}
	if (i == j)
	{
		printf("%d��%d�͓�����\n", i, j);
	}
	if (i < j)
	{
		printf("%d�̕���%d���%d������\n", i, j, j - i);
	}
}