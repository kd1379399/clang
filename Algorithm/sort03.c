#include<stdio.h>
main()
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };
	printf("ソート前\n");
	for (i = 0; i < 5; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}

	//基本挿入法
	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}
	printf("ソート後\n");
	for (i = 0; i < 5; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}
}