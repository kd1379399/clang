#include<stdio.h>
main()
{
	int ia, ib;
	printf("2�̐���>");
	scanf("%d%d", &ia, &ib);
	printf("\n***%d��%d�̎l�����Z***\n", ia, ib);
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d/%d=%d\n", ia, ib, ia * ib);
	printf("%d*%d=%d�]��%d\n", ia, ib, ia / ib, ia % ib);
}