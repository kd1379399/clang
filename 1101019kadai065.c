#include<stdio.h>
main()
{
	int i = 0;
	int sum = 0;
	int cnt = 0;
	do
	{
		sum += i; 
		cnt++;
		printf("®”:");
		scanf("%d", &i);
	} while (i != -999);
	cnt--;
	printf("‡Œv=%d\t", sum);
	printf("•½‹Ï=%.2f\n", (float)sum / (float)cnt);
}