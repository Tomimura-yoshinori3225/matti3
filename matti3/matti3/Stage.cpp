#include "Stage.h"
#include "DxLib.h"
#include "InputControl.h"

/******************************

*マクロ定義

*************************************/

#define HEIGHT                 (12)    //ブロック配置サイズ（高さ）
#define WIDTH                  (12)    //ブロック配置サイズ（幅）
#define BLOCKSIZE              (48)    //ブロックサイズ
#define BLOCK_IMAGE_MAX        (10)    //ブロック画像数


#define SELECT_MAX             (8)     //アイテム最大数

#define SELECT_CURSOR          (0)
#define NEXT_CURSOR            (1)
#define TMP_CUROR              (2)

/********************************

*型定義

*******************************/

typedef atruct
{
	int flg;
int x, y,;
int width, height;
int image;
int backup;

}T_Object;

typedef struct
{
	int x;
	int y;
}T_CURSOR;

enum
{
	E_NONE,
	E_ONCE,
	E_SECOND
};

/************************

*変数宣言

************************/

T_Object Block[HEIGHT][WIDTH];         //ブロックオブジェクトデータ
T_CURSOR Select[3];                    //セレクトカーソル座標
int Item[ITEM_MAX];
int ClickStatus;
int Stage_State;
int Stage_Mission;
int Stage_Score;
int ClearFlag;

int BlockImage[BLOCK_IMAGE_MAX];   //ブロック画像
int StageImage;                     //背景用画像
