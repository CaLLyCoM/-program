#include <stdio.h>

int main(void)
{
int d[10][10];
int i=0,f=0;
for(i=0;i<=9;i++)/*�������P����X�܂ŕω�*/
{
for(f=0;f<=9;f++)/*�E�����P����X�܂ŕω�*/
{
d[i][f]=i*f;/*�v�Z��*/
}
}
for(i=1;i<=9;i++)
{
for(f=1;f<=9;f++)
{
printf("%3d",d[i][f]);/*��𐮂��邽�߂�%3d�Ƃ���*/
}
printf("\n");
}
return 0;
}

