#include<stdio.h>
void calculate(int a, int b, int* p_sum, float* p_ave);
main()
{
	int a, b, sum;
	float ave;
	printf("整数を2つ入力>");
	scanf("%d%d", &a, &b);
	calculate(a, b, &sum, &ave);
	printf("合計は%d\t平均は%.2f", sum,ave);
}
void calculate(int a, int b, int* p_sum, float* p_ave)
{

	*p_sum = a + b;
	*p_ave = (a + b) / 2.0;
	return;
}