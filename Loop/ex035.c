#include<stdio.h>
main()
{
	int num, sum;
	sum = 0;
	while (1)
	{
		printf("”‚ğ“ü—Í:");
		scanf("%d", &num);
		if (num == -999)break;
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
}