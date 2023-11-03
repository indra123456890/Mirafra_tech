#include<stdio.h>
int main()
{
int a[8]={5,1,3,2,18,42,6,7};
int data=9;
int i;
for(i=0;i<8;i++)
{
if(a[i]==data)
{
printf("data found at index %d",i);
break;
}
if(i==7)
{
printf("data not found");
}
}
}

//Function with no return

/*#include<stdio.h>
void linear(int a[],int data)
{
int i;
for(i=0;i<8;i++)
{
if(a[i]==data)
{
printf("data found at index %d",i);
}
}
}
int main()
{
int a[8]={5,1,3,2,18,42,6,7};
int data=42;
linear(a,data);
}*/


/*#include<stdio.h>
int linear(int a[],int data)
{
int i;
for(i=0;i<8;i++)
{
if(a[i]==data)
{
return i;
}
}
}
int main()
{
int a[8]={5,1,3,2,18,42,6,7};
int data=42;
int r;
r=linear(a,data);
printf("data found at index %d",r);
}*/

