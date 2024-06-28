#include<stdio.h>
main()
{
	char i;
	printf("1•¶Žš“ü—Í>");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z')
	{
		printf("%c\n", i - 32);
	}
	if (i >= 'A' && i <= 'Z')
	{
		printf("%c\n", i + 32);
	}
	else
	{
		printf("%c\n", i);
	}
}