#include<stdio.h>
main()
{
	int i, num, sum;
	sum = 0; 
	printf("数を入力:");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++)
	{
		sum += num;
		printf("数");
		scanf("%d", &num);
	}
	printf("合計=%d\t 平均=%.2f\n", sum, (float)sum / i);
}