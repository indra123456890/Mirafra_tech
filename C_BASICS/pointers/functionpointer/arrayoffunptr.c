//normal

/*#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}

int main()
{
int a=10,b=2;
int(*p[5])(int,int);
p[0]=add;
printf("%d",(*p[0])(a,b));
p[1]=sub;
printf("%d",(*p[1])(a,b));
}*/

//using switch case above prog
#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}
int main()
{
int (*fp[2])(int,int)={add,sub};
int c;
int r=0;
int a=4,b=4;
printf("enter choice");
scanf("%d",&c);

switch(c)
{
case 1:r=add(a,b);
	printf("%d",r);
break;
case 2:r=sub(a,b);
	printf("%d",r);
break;
default:
printf("invalid");
break;
}
}
