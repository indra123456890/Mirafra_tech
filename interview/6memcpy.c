//tryin to copy the string into same string 
/* overlapping in memcpy occurs when source and destination memory regions overlap.memcpy funcn is designed to copy non-overlapping memory blocks ,when we try to use memcpy with overlapping memory regions it can result in undefined behviour*/

/*in below ex memcpy funcn is used to copy portion of buffer to location with same buffer it leads to undefined behaviour*/

/*to overcome this memmove is used to avoid issues with overlapping memory regions and it provides expected behaviour*/

#include<stdio.h>
#include<string.h>
int main()
{
char s[20]="hello, world!";
char a[20]="abcdefghijk";
char b[20];
//memcpy(s+1,s+8,sizeof(s));
printf("%s\n",memmove(s+6,s+8,10));
printf("%s\n",memcpy(s+6,s+5,10));
printf("%s",s);
}

