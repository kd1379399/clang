#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, un;
	srand(time(0));
	un = (rand() % 5) + 1;
	printf("きょうのあなたの運は");
	for (i = 0; i < un; i++)
	{
		printf("☆");
	}
	printf("です\n");
}