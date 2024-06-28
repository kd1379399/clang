#include<stdio.h>
main()
{
	int i;
	float box[3], sum;
	for (i = 0, sum = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f",&box[i]);
		sum += box[i];
	}
	printf("‡Œv‚Í%.2f\n•½‹Ï‚Í%.2f\n", sum, sum / 3);
}