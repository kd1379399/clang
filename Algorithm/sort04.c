#include<stdio.h>
#define DCNT 8	//�f�[�^�����`
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;
	
	//�V�F���\�[�g
	gap = DCNT / 2;		//�S�f�[�^/2�ōŏ��̔�r�Ԋu�����߂�

	while (gap > 0)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				//�m�F�p�ɕ\��
				int k;
				for (k = 0; k < DCNT; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j])	//j+gap�Ԗڂ�j�ԖڂƔ�r
				{
					//d[j]��d[j+gap]�̓���ւ�
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}
		gap = gap / 2;	//��r�Ԋu�𔼕��ɂ���
		printf("----------------------------\n");	//�m�F�p�ɕ\��
	}
	//���ʂ̕\��
	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", d[i]);
	}
}