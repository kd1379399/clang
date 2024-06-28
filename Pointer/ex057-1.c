#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{ 40,50,60 },{70,80,90} };
	int* p_tbl, i;
	for (i = 0, p_tbl = tbl[i]; i < 3; i++)
	{
		printf("%d ", *p_tbl++);
	}
}