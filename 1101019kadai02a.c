#include<stdio.h>
main()
{
	double i, j;
	printf("2�̎����l>");
	scanf("%lf%lf", &i, &j);
	printf("\n***%lf��%lf�̎l�����Z***\n", i, j);
	printf("�a=%.6lf ��=%.6lf ��=%.6lf ��=%.6lf"
		, i + j, i - j, i * j, i / j);
}