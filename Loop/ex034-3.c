#include<stdio.h>
main()
{
	int num;
	int i = 0; int j = 0;
	printf("”‚ğ“ü—Í:");
	scanf("%d", &num);
	do
	{
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		num--;
		j++;
	} while (num > 0);
}