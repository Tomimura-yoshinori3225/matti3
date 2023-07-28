#include"GameOverScene.h"
#include"DxLib.h"
#include"SceneManager.h"


/********************************

*�ϐ��錾

********************************/

int GameOverImage;
int GameOverSE;
int GameOverFlag;


/****************************

*�v���g�^�C�v�錾

*****************************/


/***********************************

*�Q�[���I�[�o�[��ʁF����������

*�����F�Ȃ�

*�߂�l�F�G���[���

**************************************/


int GameOverScene_Initialize(void)
{
	int ret = 0;
	
	//��ʓǂݍ���
	GameOverImage = LoadGraph("images/gameover.png");

	//�����ǂݍ���
	GameOverSE = LoadSoundMem("sound/gameover_se.mp3");

	GameOverFlag = FALSE;

	//�G���[�`�F�b�N
	if (GameOverImage == -1)
	{
		ret = -1;
	}
	if (GameOverSE == -1)
	{
		ret = -1;
	}
	return ret;
}




/*******************************

*�Q�[���I�[�o�[��ʁF�X�V����

*�����F�Ȃ�

*�߂�l�F�Ȃ�

******************************/

void GameOverScene_Update(void)

{
	//�Q�[���I�[�o�[���ʉ��Đ��`�F�b�N
	if (CheckSoundMem(GameOverSE) == 0)
	{
		if(GameOverFlag == TRUE)
		{
			Change_Scene(E_GAME_OVER);
		}
		else
		{
			PlaySoundMem(GameOverSE, DX_PLAYTYPE_BACK);
			
		}
	}
}



