#include <stdio.h> 
int main(void) 
{
int a,b;
printf("整数を入力してください。\n");
scanf("%d",&a);

for(b=2;b<=a;b++)/*条件付け*/
{ 
if(a==b)/*１とその数字まで割り切れなかったとき*/ 
{
printf("%dは素数です。\n",a); 
}
else if(a%b==0)/*その他の場合の表示*/
{ 
printf("%dは素数ではありません。\n",a);
break;
}
}
return 0; 
} 
