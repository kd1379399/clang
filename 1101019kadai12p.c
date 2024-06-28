#include<stdio.h>
//#include<string.h>
main()
{
	char* day[] = { "sunday","monday","tuseday","wednesday",
		"thursday","friday","saturday",NULL };
	char** p = day;
	int i;

	//1
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);
	}

	//2-1
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", *(p + i));
	}

	//2-2
	while (*p)
	{
		printf("%s\n", *p++);
	}

	//1,2-1,2-2 ‚Ç‚ê‚Å‚àÀs‚Å‚«‚é
}