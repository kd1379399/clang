#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, int* p_min);	//プロトタイプ宣言
main()
{
	int a, b, c, max, min;
	printf("整数を3つ入力>");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値＝%d\t最小値=%d\n", max, min);
}
//関数定義
void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	//仮の最大値としてaを入れる
	*p_max = a;		
	//bと比較してbが大きい場合はmaxに代入
	if (*p_max < b)
	{
		*p_max = b;
	}
	//cと比較してcが大きい場合はmaxに代入
	if (*p_max < c)
	{
		*p_max = c;
	}

	//仮の最小値としてaを入れる
	*p_min = a;
	//bと比較してbが小さい場合はminに代入
	if (*p_min > b)
	{
		*p_min = b;
	}
	//cと比較してcが小さい場合はminに代入
	if (*p_min > c)
	{
		*p_min = c;
	}
	return;		//省略可能
}