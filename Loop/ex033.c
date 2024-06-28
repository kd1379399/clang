#include<stdio.h>
main()
{
	int i, num, sum;
	sum = 0; 
	printf("”‚ğ“ü—Í:");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++)
	{
		sum += num;
		printf("”");
		scanf("%d", &num);
	}
	printf("‡Œv=%d\t •½‹Ï=%.2f\n", sum, (float)sum / i);
}