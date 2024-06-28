#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,i;
	srand(time(0));
	k = (rand() % 100) + 1;
	//for (i = 0; i < 10; i++)
	
		if (k <= 30)
		{
			printf("‰ïS‚ÌˆêŒ‚I%d\n",k);
		}
		else
		{
			printf("’ÊíUŒ‚\n");
		}
	
	
}