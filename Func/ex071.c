#include<stdio.h>
int gokei (int a, int b, int c);
float heikin (int a, int b, int c);
main()
{
	int a, b, c, g;
	float h = 0;

	printf("整数を3つ入力>");
	scanf("%d%d%d", &a, &b, &c);;
	g = gokei(a, b, c);
	h = heikin(a, b, c);
	printf("合計は%d\t", g);
	printf("合計は%.2f", h);
}
int gokei (int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
	/*return(a+b+c)*/
}
float heikin (int a, int b, int c)
{
	float ans;
	ans = (a + b + c) / 3.0;
	return (ans);
	/*return((a + b + c) / 3.0;)*/
}