/*#include<stdio.h>
int main()
{
	int a[7]={2,7,9,5,1,3,5};
	int b[10];
	int i=0,j,k=0;
	for(j=1;j<7;j++)
	{
		if(a[j]==0 || a[j]!=0)
		{
			b[k]=a[j]-a[i];
			k++;
		}
	}
	for(i=0;i<6;i++)
	  {
	  printf("%d",b[i]);
	  }
	  }
int big;
int l;
big=b[0];
for(l=1;l<6;l++)
{
	if(b[l]>big)
	{
		big=b[l];
	}
}
printf("%d",big);
}*/

#include<stdio.h>
int max(int x,int y)
{
return(x>y)?x:y;
}
int main()
{
	int a[7]={2,7,9,5,1,3,5};
	int i=0,j,diff=0;
for(i=0;i<7;i++)
{
	for(j=i+1;j<7;j++)
	{
		if(a[j]>a[i])
		{
		diff=max(diff,a[j]-a[i]);
		}
	}
}
printf("%d",diff);
}


