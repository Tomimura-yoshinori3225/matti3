#include "DxLib.h"
#include "InputControl.h"



/********************

�ϐ���`

*********************/

int old_button;
int now_botton;
int mouse_position_x;
int mouse_position_y;



/********************************

*�v���g�^�C�v�錾

*********************************/


/***********************************

*���͐����@�\�F����������

*�����F�Ȃ�

*�߂�l�F�Ȃ�

**********************************/


void Input_Initialize(void)
{
	old_button = NULL;
	now_button = NULL;
	mouse_position_x = NULL;
	mouse_position_y = NULL;

}

/*******************************

*���͐��������F�X�V����

*�����F�Ȃ�

*�߂�l�F�Ȃ�

*******************************/

void Input_Update(void)
{
	//�}�E�X���͏��̎擾
	old_button = now_botton;
	now_botton = GetMouseInput();


	//�}�E�X���͏��̎擾
	GetMousePoint(&mouse_position_x, &mouse_position_y);
}