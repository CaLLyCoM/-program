#include <stdio.h> 
int main(void)
{
int i,j; 
int a;
int seisu[10];

printf("10�̐�������͂��Ă��������B\n"); 

for (i=0; i<=10; ++i) 
{
/*�z����̂P�`�P�O�܂łɐ��l�����*/
scanf("%d", &seisu[i]); 
}
for (i=0; i<=10; ++i) 
{ 
for (j=i+1; j<=10; ++j) 
{
if (seisu[i] < seisu[j])
{ 
/*�����ɂ�莟�̐��l�ɕω�*/
a =  seisu[i]; 
seisu[i] = seisu[j]; 
seisu[j] = a; 
}
} 
} 
printf("\n�傫�����ɕ��ёւ��܂��B\n"); 
for (i=0; i<=10; ++i) 
{
printf("%d\n", seisu[i]); 
}
return 0;
}

