#include <stdio.h>
int main(void)
{
char *i[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};/*月の英語表記の配列*/
char *j[13]={"ガーネット","アメシスト","アクアマリン","ダイヤモンド","エメラルド","パール","ルビー","ペリドット","サファイア","オパール","トパーズ","トルコ石"};/*誕生石の配列*/
int a;
printf("月を入力してください。\n");
scanf("%d",&a);
printf("英語表記　%s。\n",i[a-1]);
printf("誕生石　%s。\n",j[a-1]);
return 0;
}
