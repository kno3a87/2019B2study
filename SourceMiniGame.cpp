#include "DxLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	LoadGraphScreen(0, 0, "�w�i.png", TRUE); // �摜��`�悷��

	int zyanken;
	srand((unsigned int)time(NULL)); // ���ݎ����̏��ŏ�����
	zyanken = rand() % 3 ;

	if (zyanken == 0) {
		LoadGraphScreen(0, 0, "�O�[.png", TRUE);
		WaitKey();
	}
	else if (zyanken == 1) {
		LoadGraphScreen(0, 0, "�`���L.png", TRUE);
		WaitKey();
	}
	else if(zyanken == 2){
		LoadGraphScreen(0, 0, "�p�[.png", TRUE);
		WaitKey();
	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}