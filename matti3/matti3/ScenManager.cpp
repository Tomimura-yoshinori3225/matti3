#include "ScenManager.h"
#include "TitleScen.h"
#include "GameMainScene.h"
#include "GameClearScene.h"
#include "GameOverScene.h"


/****************************

*マクロ定義

*************************/


/****************************

*型定義

*****************************/


/************************

*変数宣言

**************************/

GAME_MODE Dame_Mode;          //ゲームモード情報（現在）
GAME_MODE Next_MODE;          //ゲームモード情報（次）


/***********************

*プロトタイプ宣言

****************************/



/***************************

*シーン管理機能：初期化処理

*引数：ゲームモード情報

*戻り値：なし

*****************************/

int SceneManager_Initialize(GAME_MODE mode)
{
	int Read_Error;

	//シーン読み込み処理
	//タイトル画面
	Read_Error = TitleScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームメイン画面
	Read_Error = GameClearScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームクリア画面
	Read_Error = GameClearScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームオーバー画面
	Read_Error = GameOverScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	Game_Mode = mode;
	Next_Mode = Game_Mode;

	return Read__Error;
}

/****************************

*シーン管理機能：更新処理

*引数：なし

*戻り値：なし

********************************/

void SceneManagr_Update(void)
{
	//前フレームとゲームモードが違っていたらシーンを切り替える
	if (Game_Mode != Next_Mode)
	{
		SceneManager_Initialize(Next__Mode);
	}
	
	