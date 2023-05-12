#include <stdio.h>
#include <errno.h>
int main(int argc , char *argv[])
{
FILE*fp;
size_t rsize;
int ret;
char buff[256];
if (argc != 2){
printf ("%s ファイル名\n",argv[0]);
return 0;
}
fp = fopen(argv[1],"rb");
if (fp == NULL){
printf("ファイルオープン失敗:errno=%d\n",errno);
return 10;
}
while(1){
rsize = fread(buff,1,sizeof(buff),fp);
//読み込んだ要素数が0なら終了
//但し、これはエラーが発生したから0なのか、ファイル終端に達したから0なのかを
//区別できない（freadの仕様のため）
if (rsize == 0) break;
//とにかく正常に読めたので、その処理をおこなう。
//読み込んだサイズはrsizeバイトである
//rsizeの内容を印字して、処理とする（実際の処理は質問者が実装する）
printf("rsize=%d\n",rsize);
}
//breakから抜けたとき、ファイル終端に達していることを確認する
if (feof(fp) == 0){
//ファイル終端に達していない、つまり何らかのエラーがあった
printf("ファイル読み込み失敗:errno=%d\n",errno);
//既にエラーが起こっているのでfcloseのエラーはチェックしない
fclose(fp);
return 10;
}
ret = fclose(fp);
if (ret != 0){
printf("ファイルクローズ失敗:errno=%d\n",errno);
return 10;
}
printf("正常終了\n");
return 0;
}