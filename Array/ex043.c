#include<stdio.h>
main()
{
	char data[] = "orange";
	int i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("������:%s\n",data);
	printf("�������%d����:\n", i);
}