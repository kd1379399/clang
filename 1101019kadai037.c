#include<stdio.h>
main()
{
	int i = 0;
	printf("0�`100�܂ł̐���>");
	scanf("%d", &i);
	if (i > 90)
	{
		printf("���̐��l�̔����[5]");
	}
	if (i > 80 && i < 90)
	{
		printf("���̐��l�̔����[4]");
	}
	if (i > 50 && i < 80)
	{
		printf("���̐��l�̔����[3]");
	}
	if (i > 30 && i < 50)
	{
		printf("���̐��l�̔����[2]");
	}
	if (i < 30)
	{
		printf("���̐��l�̔����[1]");
	}
}