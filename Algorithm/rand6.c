#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, con;
	printf("�����o���܂���\n1:�O�[,2:�`���L,3:�p�[>");
	scanf("%d", &pl);
	if (pl == 1){
		printf("�v���C���[�̓O�[\n");
	}
	if (pl == 2){
		printf("�v���C���[�̓`���L\n");
	}
	if (pl == 3){
		printf("�v���C���[�̓p�[\n");
	}
	srand(time(0));
	con = rand() % 3;
	if (con == 0){
		printf("�R���s���[�^�[�̓O�[\n");
	}
	if (con == 1) {
		printf("�R���s���[�^�[�̓`���L\n");
	}
	if (con == 2) {
		printf("�R���s���[�^�[�̓p�[\n");
	}
	if ((pl == 1 && con == 1)
		|| (pl == 2 && con == 2)
		|| (pl == 3 && con == 0)) {
		printf("�v���C���[�̏���\n");
	}
	if ((pl == 1 && con == 2)
		|| (pl == 2 && con == 0)
		|| (pl == 3 && con == 1)) {
		printf("�v���C���[�̕���\n");
	}
	if ((pl == 1 && con == 0)
		|| (pl == 2 && con == 1)
		|| (pl == 3 && con == 2)) {
		printf("������\n");
	}
}