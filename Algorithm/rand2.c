#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice ,i;
	srand(time(0));
	//dice = rand() % 6; //0~5�܂�
	for (i = 0; i < 10; i++)
	{
		dice = (rand() % 6) + 1;//1~6�܂�
		printf("���������%d�ł�\n", dice);
	}
}