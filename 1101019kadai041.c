#include<stdio.h>
main()
{
	int i = 0, sum = 0, cnt = 0;
	float ave = 0;
	while (i != -999)
	{
		sum += i;
		printf("����>%d(-999�ŏI��)", i);
		scanf("%d", &i);
		cnt++;
	}
	printf("���v=%d\n", sum);
	printf("����=%.2f", (float)sum / cnt);
}