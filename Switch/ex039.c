#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("���������:");
	scanf("%c", &flg);
	printf("���������:");
	scanf("%d%d%d", &d1, &d2, &d3);
	switch (flg)
	{
		case 'd':
		case 'D':
			if (d1 > d2)
			{
				if (d1 > d3)
				{
					printf("�ő�l��%d\n", d1);
				}
				else
				{
					printf("�ő�l��%d\n", d3);
				}
			}
			else
			{
				if (d2 > d3)
				{
					printf("�ő�l��%d", d2);
				}
				else
				{
					printf("�ő�l��%d", d3);
				}
			}break;
	
		case 's':
		case 'S':
			if (d1 < d2)
			{
				if (d1 < d3)
				{
					printf("�ŏ��l��%d\n", d1);
				}
				else
				{
					printf("�ŏ��l��%d\n", d3);
				}
			}
			else
			{
				if (d2 < d3)
				{
					printf("�ŏ��l��%d", d2);
				}
				else
				{
					printf("�ŏ��l��%d", d3);
				}
			}break;
		case 'g':
		case 'G':
			printf("���v��%d\n", d1 + d2 + d3);
			break;

		case 'h':
		case 'H':
			printf("���ς�%.2f\n", (float)(d1 + d2 + d3) / 3);
			break;

		default:
			printf("�����G���[\n");
	}
}