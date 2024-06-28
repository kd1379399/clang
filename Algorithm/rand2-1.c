#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, c, i;
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		a = rand() % 100;	//0~99
		b = (rand() % 41) + 10;	//10~50
		c = (rand() % 301) + -100;	//-100~200
		printf("a=%d,b=%d,c=%d\n", a, b, c);
	}
}