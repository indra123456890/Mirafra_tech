/*7) Read some sentences as input and convert the first letter of each word

  of every sentence to capital letter and print them back.*/

#include<stdio.h>
int main()
{
	int sen,si,i,j;
	printf("enter no of sen & si:");
	scanf("%d %d",&sen,&si);
	char a[sen][si];
	printf("enter senetences:");
	for(i=0;i<sen;i++)
	{
		scanf(" %[^\n]s",a[i]);
	}
	for(i=0;i<sen;i++)
	{
		for(j=0;a[i][j]!=0;j++)
		{
			if(j==0)
			{
				if(a[i][j]>='a' && a[i][j]<='z')
				{
					a[i][j]=a[i][j]-32;
				}
			}
			else
			{
				if(a[i][j]==32 && a[i][j+1]>='a' &&a[i][j+1]<='z')
				{
					a[i][j+1]=a[i][j+1]-32;
				}
			}
		}
	}
	for(i=0;i<sen;i++)
	{
		printf("%s\n",a[i]);
	}
}


