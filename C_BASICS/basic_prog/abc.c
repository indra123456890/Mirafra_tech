#include<stdio.h>
#include<string.h>
int main()
{
char src[10]="a4d3dffdv";
char des[5];
printf("%p\n",des);
printf("%s\n",memmove(des,src,10));
//printf("%s\n",memcpy(des,src,10));
//printf("%s %s %p\n",src,des,des);
printf("%s %s %d\n",src,des,sizeof(des));
}
