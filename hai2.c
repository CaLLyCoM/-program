#include <stdio.h>

int main(void)
{
int d[10][10];
int i=0,f=0;
for(i=0;i<=9;i++)/*¶‘¤‚ª‚P‚©‚ç‚X‚Ü‚Å•Ï‰»*/
{
for(f=0;f<=9;f++)/*‰E‘¤‚ª‚P‚©‚ç‚X‚Ü‚Å•Ï‰»*/
{
d[i][f]=i*f;/*ŒvŽZŽ®*/
}
}
for(i=1;i<=9;i++)
{
for(f=1;f<=9;f++)
{
printf("%3d",d[i][f]);/*—ñ‚ð®‚¦‚é‚½‚ß‚É%3d‚Æ‚·‚é*/
}
printf("\n");
}
return 0;
}

