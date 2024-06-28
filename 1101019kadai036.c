#include<stdio.h>
main()
{
	int i = 0, j = 0;
	printf("®”‡@>");
	scanf("%d", &i);
	printf("®”‡A>");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", i, j, i - j);
	}
	if (i == j)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n", i, j);
	}
	if (i < j)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", i, j, j - i);
	}
}