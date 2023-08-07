#include "DxLib.h"
#include "InputControl.h"



/********************

変数定義

*********************/

int old_button;
int now_botton;
int mouse_position_x;
int mouse_position_y;



/********************************

*プロトタイプ宣言

*********************************/


/***********************************

*入力制限機能：初期化処理

*引数：なし

*戻り値：なし

**********************************/


void Input_Initialize(void)
{
	old_button = NULL;
	now_button = NULL;
	mouse_position_x = NULL;
	mouse_position_y = NULL;

}

/*******************************

*入力制限処理：更新処理

*引数：なし

*戻り値：なし

*******************************/

void Input_Update(void)
{
	//マウス入力情報の取得
	old_button = now_botton;
	now_botton = GetMouseInput();


	//マウス入力情報の取得
	GetMousePoint(&mouse_position_x, &mouse_position_y);
}