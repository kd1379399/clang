#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, int* p_min);	//�v���g�^�C�v�錾
main()
{
	int a, b, c, max, min;
	printf("������3����>");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("�ő�l��%d\t�ŏ��l=%d\n", max, min);
}
//�֐���`
void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	//���̍ő�l�Ƃ���a������
	*p_max = a;		
	//b�Ɣ�r����b���傫���ꍇ��max�ɑ��
	if (*p_max < b)
	{
		*p_max = b;
	}
	//c�Ɣ�r����c���傫���ꍇ��max�ɑ��
	if (*p_max < c)
	{
		*p_max = c;
	}

	//���̍ŏ��l�Ƃ���a������
	*p_min = a;
	//b�Ɣ�r����b���������ꍇ��min�ɑ��
	if (*p_min > b)
	{
		*p_min = b;
	}
	//c�Ɣ�r����c���������ꍇ��min�ɑ��
	if (*p_min > c)
	{
		*p_min = c;
	}
	return;		//�ȗ��\
}