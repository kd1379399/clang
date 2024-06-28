#include<stdio.h>
int moji(char a);
main()
{
	char c;
	int ret;
	printf("アルファベット1文字?");
	scanf("%c", &c);
	ret = moji(a);
	if (ret == 1)
	{
		printf("戻り値は%dなので入力下値は大文字です\n", ret);
	}
	else
	{
		printf("戻り値は%dなので入力下値は小文字です\n", ret);
	}
}
int moji(char a)
{
	if (a >= 0x41 && a <= 0x5A)
	{
		return(1);
	}
	else if (a >= 0x61 && a <= 0x7A)
	{
		return(0);
	}
}