#include "DxLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	LoadGraphScreen(0, 0, "背景.png", TRUE); // 画像を描画する

	int zyanken;
	srand((unsigned int)time(NULL)); // 現在時刻の情報で初期化
	zyanken = rand() % 3 ;

	if (zyanken == 0) {
		LoadGraphScreen(0, 0, "グー.png", TRUE);
		WaitKey();
	}
	else if (zyanken == 1) {
		LoadGraphScreen(0, 0, "チョキ.png", TRUE);
		WaitKey();
	}
	else if(zyanken == 2){
		LoadGraphScreen(0, 0, "パー.png", TRUE);
		WaitKey();
	}

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}