/*we can declare an array that contains pointers as its elements
ex int *arrp[10];
here arrp is an array of 10integers;
here pointers stored in consecutive locations  but integers can store anywhere
to access ecah element we use indexing method
every element of this array is a pointer variable that can hold address of any variable...(array itself become as pointers and stores the address of any variable*/


/*#include<stdio.h>
int main()
{
int *p[3];
int i,a=5,b=10,c=15;
p[0]=&a;
p[1]=&b;
p[2]=&c;
for(i=0;i<3;i++)
{
printf("%d",*p[i]);
}
}*/



//type casting
/*#include<stdio.h>
int main()
{
void *p[3];
char a='a';
float b=12.45;
int c=10;
p[0]=&a;
p[1]=&b;
p[2]=&c;
printf("%c",*(char *)p[0]);
}*/





//using function

#include<stdio.h>
void fun(int *p[])
{
	int i, a=5,b=10,c=15;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	for(i=0;i<3;i++)
	{
		printf("%d",*p[i]);
	}
}
int main()
{
	int *p[3];
	fun(p);
}

