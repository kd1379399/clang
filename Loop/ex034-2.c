#include<stdio.h>
main()
{
	int num;
	int i = 0; 
	printf("�������:");
	scanf("%d", &num);
	do
	{
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i < 5 );
		num--;
		
	} while (num = 0);
}