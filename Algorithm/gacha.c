#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	i = (rand() % 100) + 1;
	if (i >= 50)
	{
		printf("���m�[�}��\n");
	}
	else {
		if (i >= 20) {
			printf("�������A\n");
		}
		else {
			if (i >= 6) {
				printf("������SR\n");
			}
			else {
				if (i >= 2) {
					printf("��������UR\n");
				}
				else {
					if (i == 1) {
						printf("����������LR\n");
					}
				}
			}
		}
	}
}