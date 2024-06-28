#include<stdio.h>
main()
{
	int i = 0;
	printf("0～100までの整数>");
	scanf("%d", &i);
	if (i > 90)
	{
		printf("その数値の判定は[5]");
	}
	if (i > 80 && i < 90)
	{
		printf("その数値の判定は[4]");
	}
	if (i > 50 && i < 80)
	{
		printf("その数値の判定は[3]");
	}
	if (i > 30 && i < 50)
	{
		printf("その数値の判定は[2]");
	}
	if (i < 30)
	{
		printf("その数値の判定は[1]");
	}
}