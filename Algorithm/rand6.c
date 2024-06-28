#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, con;
	printf("何を出しますか\n1:グー,2:チョキ,3:パー>");
	scanf("%d", &pl);
	if (pl == 1){
		printf("プレイヤーはグー\n");
	}
	if (pl == 2){
		printf("プレイヤーはチョキ\n");
	}
	if (pl == 3){
		printf("プレイヤーはパー\n");
	}
	srand(time(0));
	con = rand() % 3;
	if (con == 0){
		printf("コンピューターはグー\n");
	}
	if (con == 1) {
		printf("コンピューターはチョキ\n");
	}
	if (con == 2) {
		printf("コンピューターはパー\n");
	}
	if ((pl == 1 && con == 1)
		|| (pl == 2 && con == 2)
		|| (pl == 3 && con == 0)) {
		printf("プレイヤーの勝ち\n");
	}
	if ((pl == 1 && con == 2)
		|| (pl == 2 && con == 0)
		|| (pl == 3 && con == 1)) {
		printf("プレイヤーの負け\n");
	}
	if ((pl == 1 && con == 0)
		|| (pl == 2 && con == 1)
		|| (pl == 3 && con == 2)) {
		printf("あいこ\n");
	}
}