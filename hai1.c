#include <stdio.h>
int main(void)
{
int number[10];
int a=0;
int b=0;
int c=0;
int i;
/*それぞれの配列に数値を収納*/
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
else if(number[i]%2==0)/*偶数のとき余りが０になる*/
{
b++;
}
else if(number[i]%2==1)/*奇数のとき余りが１になる*/
{
c++;
}
}
printf("偶数%d個、奇数%d個、負の数%d個\n",b,c,a);

return 0;
}

