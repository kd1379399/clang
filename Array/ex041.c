#include<stdio.h>
main()
{
	int i;
	float box[3], sum;
	for (i = 0, sum = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f",&box[i]);
		sum += box[i];
	}
	printf("合計は%.2f\n平均は%.2f\n", sum, sum / 3);
}