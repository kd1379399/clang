#include<stdio.h>
main()
{
	char s[21];
	int i, no;
	printf("•¶š—ñ‚ğ“ü—Í>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[‚Í>", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚Í%s", s);
}