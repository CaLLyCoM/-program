#include <stdio.h>
int main(void)
{
char *i[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};/*���̉p��\�L�̔z��*/
char *j[13]={"�K�[�l�b�g","�A���V�X�g","�A�N�A�}����","�_�C�������h","�G�������h","�p�[��","���r�[","�y���h�b�g","�T�t�@�C�A","�I�p�[��","�g�p�[�Y","�g���R��"};/*�a���΂̔z��*/
int a;
printf("������͂��Ă��������B\n");
scanf("%d",&a);
printf("�p��\�L�@%s�B\n",i[a-1]);
printf("�a���΁@%s�B\n",j[a-1]);
return 0;
}
