#include <stdio.h>
int main(void)
{
int number[10];
int a=0;
int b=0;
int c=0;
int i;
/*���ꂼ��̔z��ɐ��l�����[*/
number[0]=2;
number[1]=-8;
number[2]=5;
number[3]=-4;
number[4]=6;
number[5]=5;
number[6]=7;
number[7]=-3;
number[8]=-9;
number[9]=1;

for(i=0;i<10;i++)
{
if(number[i]<0)
{
a++;
}
else if(number[i]%2==0)/*�����̂Ƃ��]�肪�O�ɂȂ�*/
{
b++;
}
else if(number[i]%2==1)/*��̂Ƃ��]�肪�P�ɂȂ�*/
{
c++;
}
}
printf("����%d�A�%d�A���̐�%d��\n",b,c,a);

return 0;
}

