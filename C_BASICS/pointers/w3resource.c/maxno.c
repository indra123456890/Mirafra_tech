//we didnot used function as we cnat return pointer from fun to main,we can also read directly pointer p val from user like in below 2nd prog also we can read or give val to var from user and we cn assign the v ar address to ptr and reading user ip like in 3rd prog below

/*#include<stdio.h>

int  main()
{
int a=5,b=6;
int *p=&a;
int *p2=&b;
if(*p>*p2)
{
printf("p grater than p2");
}
else
{
printf("p2 greter than p");
}
}*/

/*#include<stdio.h>
int main()
{
int a,b;
int *p=&a;
int *p2=&b;
scanf("%d",p);
scanf("%d",p2);
if(*p>*p2)
{
printf("p greyer than p2");
}
else
{
printf("p2 grfet yhn p");
}
}*/

#include<stdio.h>
int main()
{
int a,b,*p,*p2;
scanf("%d%d",&a,&b);//mistake done here by giving , after 1st %d
p=&a;
p2=&b;
if(*p>*p2)
{
printf("p greater than p2");
}
else
{
printf("p2 grat than p");
}
}
