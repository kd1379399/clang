#include<stdio.h>
int MAX(int *array, int size);
//int MIN(int *array, int size);
main()
{
	int data[] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d\n", MAX(data, 8));
	//printf("Å¬’l=%d\n", MIN(data, 8));
}
int MAX(int* array, int size)
{
	int i, max;
	for (max = *array, i = 1; i < size; i++)
	{
		if (max < *(array + i))
		{
			max = *(array + i);
		}
	}
	return max;
}
