/*#include<stdio.h>
int main()
{
int x=5;
char*p=(char *)&x;
printf("%c",*p);
}*/



/*#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
char *p=(char *)&a;
printf("%c",*p);
printf("%c",*p+1);
}*/



/*#include<stdio.h>
int main()
{
int x;
char *p=(char *)&x;
*p = 'a';
printf("%c\n",*p);
*(p+1)='b';
printf("%c\n",*(p+1));
}*/



#include<stdio.h>
int main()
{
int x,i;
char b1='a';//taking 4 character bytes
char b2='b';
char b3='c';
char b4='d';
char *p=(char *)&x;//typecasting the chracters to integer x using its int address,now it is pointing to integer pointer as *p is storing the address of int variable x.
*(p+0)=b1;//assigning each byte of chracter to the integer variable of 4 bytes in which in each byte of int stores each  byte of character
*(p+1)=b2;
*(p+2)=b3;
*(p+3)=b4;
for(i=0;i<4;i++)
{
printf("%c\n",*(p+i));//printing the value which is stored in each byte of 4 bytes.
}
}

