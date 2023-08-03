#include<stdio.h>
int main()
{
FILE *fp=fopen("new.txt","w");
if(fp==0)
{
printf("file is successfully opened");
}
else
/*{
fputc('0',fp);
fputc('#',fp);
fputc('&',fp);
}*/
{
char c;
c=fgetc(fp);
printf("%c\n",c);
fclose(fp);
}
}
