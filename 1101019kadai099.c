#include<stdio.h>
main()
{
	char data[100];
	int i, cnt;
	printf("回数と文字列を入力:");
	scanf("%d%s", &cnt, data);
	for (i = 0; i < cnt; i++)
	{
		printf("%s\t", data);

	}
}