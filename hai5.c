#include <stdio.h> 
int main(void)
{
int i,j; 
int a;
int seisu[10];

printf("10個の整数を入力してください。\n"); 

for (i=0; i<=10; ++i) 
{
/*配列内の１〜１０までに数値を入力*/
scanf("%d", &seisu[i]); 
}
for (i=0; i<=10; ++i) 
{ 
for (j=i+1; j<=10; ++j) 
{
if (seisu[i] < seisu[j])
{ 
/*条件により次の数値に変化*/
a =  seisu[i]; 
seisu[i] = seisu[j]; 
seisu[j] = a; 
}
} 
} 
printf("\n大きい順に並び替えます。\n"); 
for (i=0; i<=10; ++i) 
{
printf("%d\n", seisu[i]); 
}
return 0;
}

