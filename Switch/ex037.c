#include<stdio.h>
main()
{
	int ope;
	printf("”‚ğ“ü—Í:");
	scanf("%c", &ope);
	switch (ope)
	{
	case  '+':
		printf("‰ÁZ\n");
		break;
	case  '-':
		printf("Œ¸Z\n");
		break;
	case  '*':
		printf("æZ\n");
		break;
	case  '/':
		printf("œZ\n");
		break;
	case  '%':
		printf("—]‚è\n");
		break;
	default:
		printf("‚»‚Ì‘¼\n");
	}
}