#include<stdio.h>
main()
{
	char c;
	printf("         :");
	scanf("%c", & c);
	if (c >= 'A' && c <= 'Z')
	{
		printf(" 啶  \n");
	}
	else
	{
		printf("   ̑ \n");
	}
}