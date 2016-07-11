#include <stdio.h> 
int main(void)
{
int i,j; 
int a;
int seisu[10];

printf("10ŒÂ‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n"); 

for (i=0; i<=10; ++i) 
{
/*”z—ñ“à‚Ì‚P`‚P‚O‚Ü‚Å‚É”’l‚ğ“ü—Í*/
scanf("%d", &seisu[i]); 
}
for (i=0; i<=10; ++i) 
{ 
for (j=i+1; j<=10; ++j) 
{
if (seisu[i] < seisu[j])
{ 
/*ğŒ‚É‚æ‚èŸ‚Ì”’l‚É•Ï‰»*/
a =  seisu[i]; 
seisu[i] = seisu[j]; 
seisu[j] = a; 
}
} 
} 
printf("\n‘å‚«‚¢‡‚É•À‚Ñ‘Ö‚¦‚Ü‚·B\n"); 
for (i=0; i<=10; ++i) 
{
printf("%d\n", seisu[i]); 
}
return 0;
}

