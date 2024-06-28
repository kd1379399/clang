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
		printf("šƒm[ƒ}ƒ‹\n");
	}
	else {
		if (i >= 20) {
			printf("ššƒŒƒA\n");
		}
		else {
			if (i >= 6) {
				printf("šššSR\n");
			}
			else {
				if (i >= 2) {
					printf("ššššUR\n");
				}
				else {
					if (i == 1) {
						printf("šššššLR\n");
					}
				}
			}
		}
	}
}