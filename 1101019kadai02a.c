#include<stdio.h>
main()
{
	double i, j;
	printf("2‚Â‚ÌÀ”’l>");
	scanf("%lf%lf", &i, &j);
	printf("\n***%lf‚Æ%lf‚Ìl‘¥‰‰Z***\n", i, j);
	printf("˜a=%.6lf ·=%.6lf Ï=%.6lf ¤=%.6lf"
		, i + j, i - j, i * j, i / j);
}