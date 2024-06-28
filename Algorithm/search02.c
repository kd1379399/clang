#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	int s, i;
	printf("’Tõ’ls‚ð“ü—Í:");
	scanf("%d", &s);
	for (i = 0; s != d[i]; i++)
	{
		;
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", i);
	}
}