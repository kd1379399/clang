#include<stdio.h>
main()
{
	int i = 0, sum = 0, cnt = 0;
	float ave = 0;
	while (i != -999)
	{
		sum += i;
		printf("®”>%d(-999‚ÅI—¹)", i);
		scanf("%d", &i);
		cnt++;
	}
	printf("‡Œv=%d\n", sum);
	printf("•½‹Ï=%.2f", (float)sum / cnt);
}