#include <stdio.h> 
int main(void) 
{
int a,b;
printf("��������͂��Ă��������B\n");
scanf("%d",&a);

for(b=2;b<=a;b++)/*�����t��*/
{ 
if(a==b)/*�P�Ƃ��̐����܂Ŋ���؂�Ȃ������Ƃ�*/ 
{
printf("%d�͑f���ł��B\n",a); 
}
else if(a%b==0)/*���̑��̏ꍇ�̕\��*/
{ 
printf("%d�͑f���ł͂���܂���B\n",a);
break;
}
}
return 0; 
} 
