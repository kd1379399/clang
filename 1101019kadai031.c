#include<stdio.h>
main()
{
	float i, j;
	printf("実数>");
	scanf("%f%f", &i, &j);
	if (i < j)
	{
		printf("大きいほうは>%f", j);
	}
}