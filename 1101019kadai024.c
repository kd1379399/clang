#include<stdio.h>
main()
{
	int ia, ib;
	printf("2‚Â‚Ì®”>");
	scanf("%d%d", &ia, &ib);
	printf("\n***%d‚Æ%d‚ÌŽl‘¥‰‰ŽZ***\n", ia, ib);
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d/%d=%d\n", ia, ib, ia * ib);
	printf("%d*%d=%d—]‚è%d\n", ia, ib, ia / ib, ia % ib);
}