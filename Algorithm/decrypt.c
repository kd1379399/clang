#include<stdio.h>
main()
{
	char s[50];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("•¡†‰»•¶š—ñ‚Í,%s\n", s);
}