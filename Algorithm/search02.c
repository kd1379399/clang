#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	int s, i;
	printf("探索値sを入力:");
	scanf("%d", &s);
	for (i = 0; s != d[i]; i++)
	{
		;
	}
	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("配列の%d番目に見つかった\n", i);
	}
}