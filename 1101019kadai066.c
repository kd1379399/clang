#include<stdio.h>
main()
{
	int i = 1, cnt = 0;
	do 
	{
		cnt++;
		i += cnt;
	} while (i < 300);
	printf("%d", i);
}