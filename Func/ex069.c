#include<stdio.h>
main()
{
	int a, k = 0, ret, cnt = 0;
	printf("����>");
	ret=scanf("%d", &a);
	while (ret!= EOF)
	{
		k += a;
		cnt++;
		printf("����>");
		ret = scanf("%d", &a);
	}
	printf("���v=%d\t����=%.2f\n", k, (float)k / cnt);


	//�ʉ�
	/*int a, k = 0, ret, cnt = 0;
	printf("����>");
	while (scanf("%d", &a) != EOF)
	{
		k += a;
		cnt++;
		printf("����>");
	}
	printf("���v=%d\t����=%.2f\n", k, (float)k / cnt);*/


	//�ʉ�
	/*int a, k = 0, ret, cnt = 0;
	printf("����>");
	for (;scanf("%d", &a) != EOF;)
	{
		k += a;
		cnt++;
		printf("����>");
	}
	printf("���v=%d\t����=%.2f\n", k, (float)k / cnt);*/
}