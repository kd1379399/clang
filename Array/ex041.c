#include<stdio.h>
main()
{
	int i;
	float box[3], sum;
	for (i = 0, sum = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f",&box[i]);
		sum += box[i];
	}
	printf("���v��%.2f\n���ς�%.2f\n", sum, sum / 3);
}