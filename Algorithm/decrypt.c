#include<stdio.h>
main()
{
	char s[50];
	int i;
	printf("文字列を入力>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("複号化文字列は,%s\n", s);
}