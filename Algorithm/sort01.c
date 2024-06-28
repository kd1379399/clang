#include<stdio.h>
#define SIZE 5
main()
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };

	printf("ソート前\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}

	//基本選択法
	for (i = 0; i < SIZE; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}
}