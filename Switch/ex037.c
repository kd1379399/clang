#include<stdio.h>
main()
{
	int ope;
	printf("�������:");
	scanf("%c", &ope);
	switch (ope)
	{
	case  '+':
		printf("���Z\n");
		break;
	case  '-':
		printf("���Z\n");
		break;
	case  '*':
		printf("��Z\n");
		break;
	case  '/':
		printf("���Z\n");
		break;
	case  '%':
		printf("�]��\n");
		break;
	default:
		printf("���̑�\n");
	}
}