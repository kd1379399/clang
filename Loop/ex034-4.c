#include<stdio.h>
main()
{
	int i, j, num;
	printf("”‚ğ“ü—Í:");
	scanf("%d", &num);
	i = 0; j = 0;
	do
	{
		i = 0;
		do 
		{
			printf(" ");
			i++;
		} while (i < num - j);
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
	} while (j < num);
}