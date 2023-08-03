/*5) implement your own string reverse function using the above swap function to swap the edges while reversing.

  try calling the string reverse function using
  1) string variable
  2) string constant*/


#include<stdio.h>
void swap(char *,char *);
int mystrlen(char name[]);
void strrev(char name[]);
int main()
{
	char name[50];
	printf("enter the string :\n");
	scanf("%s",name);
	strrev(name);

}
void swap(char *a,char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int mystrlen(char name[])
{
	int i;
	for(i=0;name[i]!=0;i++);
	return i;
}



void strrev(char name[])
{
	int i,temp;
	int j,x,s=-1;
	x=mystrlen(name);
	for(i=0,j=x-1;i<j;i++,j--)
	{
		swap(&name[i],&name[j]);
	}
	printf("the reversed name:%s\n",name);
}


