#include<stdio.h>
int moji(char a);
main()
{
	char c;
	int ret;
	printf("�A���t�@�x�b�g1����?");
	scanf("%c", &c);
	ret = moji(a);
	if (ret == 1)
	{
		printf("�߂�l��%d�Ȃ̂œ��͉��l�͑啶���ł�\n", ret);
	}
	else
	{
		printf("�߂�l��%d�Ȃ̂œ��͉��l�͏������ł�\n", ret);
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