#include <stdio.h>

int main(void)
{
int d[10][10];
int i=0,f=0;
for(i=0;i<=9;i++)/*左側が１から９まで変化*/
{
for(f=0;f<=9;f++)/*右側が１から９まで変化*/
{
d[i][f]=i*f;/*計算式*/
}
}
for(i=1;i<=9;i++)
{
for(f=1;f<=9;f++)
{
printf("%3d",d[i][f]);/*列を整えるために%3dとする*/
}
printf("\n");
}
return 0;
}

