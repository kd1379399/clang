#include<stdio.h>
main()
{
	int i;
	char data[] = "Apple";
	printf("1文字ずつ表示\n");
	i = 0;
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列表示\n");
	printf("%s", &data[0]);
}