#include<stdio.h>
#define PAI 3.1415
main()
{
	double i;
	printf("���a>");
	scanf("%lf", &i);
	printf("���a=%.5lf\n", i * 2);
	printf("�~��=%.5lf\n", i * PAI);
	printf("�ʐ�=%.5lf\n", i * i * PAI);
}