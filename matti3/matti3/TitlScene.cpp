#include "TitleScene.h"
#include "DxLib.h"
#inulude "InputControl.h"
#include "SceneManager.h"


/*******************************

*�}�N����`

********************************/


/*****************************

*�^��`

*******************************/


/********************************

*�ϐ���`

********************************/

int TitleImage;
int TitlBGM;

/*******************************

*�v���g�^�C�v�錾

*************************************/


/*****************************

*�^�C�g����ʁF����������

*�����F�Ȃ�

*�߂�l�F�G���[���

******************************/

int TitleScene_Initialize(void)
{
	int ret = 0;

	//��ʓǂݍ��ݏ���
	TitleImage = LoadGraph("image/title.png");

	if (TitleImage == D_ERROR)
	{
		ret = D_ERROR;
	}
	if (TitleBGM == D_ERROR)
	{
		ret = D_ERROR;
	}
	return ret;
}


/****************************

*�^�C�g����ʁF�X�V����

*�����F�Ȃ�

*�߂�l�F�Ȃ�

*****************************/

void TitleScene_Update(void)
{
	//�^�C�g��BGM
	if (CheckSoundMem(TitleBGM) == 0)
	{
		PlaySoundMem(TitleBGM, DX_PLAYTYPE_BACK);
	}
	if (GetKeyFlg(MOUSE_INPUT_LEFT) == TRUE)
	{
		if (GetMosePositionX() > 120 && GetMousePositionX() < 290 &&
			GetMpusePositionY() > 260 && GetMousePositionY() < 315)
		{
			Change_Scene(E_GAMEMEIN);

			StopSoundMem(TitleBGM);
		}
		if (GetMousePositionX() > 120 && GetMousePositionX() < 220 &&
			GetMousePositionY() > 345 && GetMousePositionY() < 400)
		{
			Change_Scene(E_END);
			StopSoundMem(TitleBGM);
		}
	}
}

/***************************

*�^�C�g����ʁF�`�揈��

*�����F�Ȃ�

*�߂�l�F�Ȃ�

******************************/

void TitleScene_Draw(void)
{
	//�^�C�g����ʂ�\��
	DrawGraph(0, 0, TitleImage, FALSE);
}