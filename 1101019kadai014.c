#include<stdio.h>
main()
{
	int yy, dd, mm;
	printf("年\n");
		scanf("%d", &yy);
		printf("月>\n");
		scanf("%d", &dd);
		printf("日>\n");
		scanf("%d", &mm);
	printf("私は、%d年%d月%d日に生まれました", yy, dd, mm);
}