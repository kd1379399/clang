#include<stdio.h>
main()
{
	char s[21];
	int i, no;
	printf("文字列を入力>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キーは>", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}
	printf("復号化済み文字列は%s", s);
}