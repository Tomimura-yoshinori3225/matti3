#include "Stage.h"
#include "DxLib.h"
#include "InputControl.h"

/******************************

*�}�N����`

*************************************/

#define HEIGHT                 (12)    //�u���b�N�z�u�T�C�Y�i�����j
#define WIDTH                  (12)    //�u���b�N�z�u�T�C�Y�i���j
#define BLOCKSIZE              (48)    //�u���b�N�T�C�Y
#define BLOCK_IMAGE_MAX        (10)    //�u���b�N�摜��


#define SELECT_MAX             (8)     //�A�C�e���ő吔

#define SELECT_CURSOR          (0)
#define NEXT_CURSOR            (1)
#define TMP_CUROR              (2)

/********************************

*�^��`

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

*�ϐ��錾

************************/

T_Object Block[HEIGHT][WIDTH];         //�u���b�N�I�u�W�F�N�g�f�[�^
T_CURSOR Select[3];                    //�Z���N�g�J�[�\�����W
int Item[ITEM_MAX];
int ClickStatus;
int Stage_State;
int Stage_Mission;
int Stage_Score;
int ClearFlag;

int BlockImage[BLOCK_IMAGE_MAX];   //�u���b�N�摜
int StageImage;                     //�w�i�p�摜
