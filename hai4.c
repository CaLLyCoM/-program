#include<stdio.h>

int main(void)
{
int salary[10]={125814,225547,132254,224321,352124,342214,382154,321014,112254,153789};
int tth[10];
int fth[10];
int oth[10];
int fh[10];
int oh[10];
int ft[10];
int t[10];
int f[10];
int o[10];
int i=0;
int a,b,c,d,e,k,l,n,m;
printf("�Ј��ʂ̎����ƍd�݂̖��������߂܂��B\n");
for(i=0;i<=10;i++)
{
tth[i] = salary[i] / 10000;
salary[i] =  salary[i] % 10000;
fth[i] = salary[i] / 5000;
salary[i] = salary[i] % 5000;
oth[i] = salary[i] / 1000;
salary[i] = salary[i] % 1000;
fh[i] = salary[i] / 500;
salary[i] = salary[i] % 500;
oh[i] = salary[i] / 100;
salary[i] = salary[i] % 100;
ft[i] = salary[i] / 50;
salary[i] = salary[i] % 50;
t[i] = salary[i] / 10;
salary[i] = salary[i] % 10;
f[i] = salary[i] / 5;
o[i] = salary[i] % 5;
}
for(i=0;i<=10;i++)
{
a=a+tth[i];
b=b+fth[i];
c=c+oth[i];
d=d+fh[i];
e=e+oh[i];
k=k+ft[i];
l=l+t[i];
n=n+f[i];
m=m+o[i];
}
printf("�P���~�D��%d��\n�T��~�D��%d��\n��~�D��%d��\n�T�O�O�~�ʂ�%d��\n�P�O�O�~�ʂ�%d��\n�T�O�~�ʂ�%d��\n�P�O�~�ʂ�%d��\n�T�~�ʂ�%d��\n�P�~�ʂ�%d���ł��B",a,b,c,d,e,k,l,n,m);

return 0;
}
