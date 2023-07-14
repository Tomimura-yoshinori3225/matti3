#include"GameClearScene.h"
#include"DxLib.h"
#include"ScenManager.h"


/************************************

*�}�N����`

**************************************/


/*************************************

*�^��`

***************************************/


/************************************

*�ϐ���`

*************************************/

int GameClearImage;
int GameClearSE;
int GameClearFlag;


/*************************************

*�v���g�^�C�v�錾

*************************************/


/****************************************

*�Q�[���N���A��ʁF����������

*�����F�Ȃ�

*�߂�l�F�G���[���

****************************************/


int GameClearScene_Initialize(void)
{
	int ret = 0;

	//��ʂ̓ǂݍ���
	GameClearImage = LoadGraph("images/gameclear.png");

	//�����̓ǂݍ���
	GameClearSE = LoadSoundMem("sounds/gamwclear_se.mp3");

	GameClearFlag = 0;

	//�G���[�`�F�b�N
	if (GameClearImage == -1)
	{
		ret = -1;
	}
	if (GameClearSE == -1)
	{
		ret = -1;
	}
	return ret;
    
}

/*****************************************

*�Q�[���N���A��ʁF�X�V����

*�����F�Ȃ�

*�߂�l�F�Ȃ�

*****************************************/

void GameClearScene_Update(void)
{
	//�Q�[���N���A���ʉ��Đ��`�F�b�N
	if (CheckSoundMem(GameClearSE) == 0)
	{
		if (GameClearFlag == TRUE)
		{
			Change_Scene(E_GAMEMAIN);
		}
		else

	}
}