#include<stdio.h>
main()
{
	char s[21];
	int i, no;
	printf("����������>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[��>", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}
	printf("�������ςݕ������%s", s);
}