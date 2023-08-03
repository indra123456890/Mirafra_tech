#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
printf("%d is biggest",a);
else if(b>c&&b>d)
printf("%d is biggest",b);
else if(c>d)
printf("%d is biggest",c);
else
printf("%d is biggest",d);
return 0;
}
