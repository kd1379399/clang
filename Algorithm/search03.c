#include<stdio.h>
main()
{
	int low, high, i, s, mid;
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���ls�����:");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l��%d�ԖڂŌ�������\n", mid);
	}
}