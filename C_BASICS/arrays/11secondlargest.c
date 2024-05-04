#include<stdio.h>
int main()
{
	int a[5]={8,6,9,10,2};//if last digit is given 100 and 3rd index is 200 and fl is 200then at that time it goes to else if
	int i=0,j=1,fl,sl;
	fl=a[i];
	sl=a[i];
	for(j=1;j<5;j++)
	{
		if(a[j]>fl)
		{
			sl=fl;
			fl=a[j];
		}
		else if(sl<a[j] && a[j]!=fl)
		{
			sl=a[j];
		}
	}
	printf("%d",sl);
}

/*#include<stdio.h>
int main()
{
	int i=0,j=1,fl,sl;
	int a[5]={8,6,9,10,2};
	fl=a[i];
	sl=a[j];
		for(j=1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				fl=a[i];
				sl=a[j];
			}
			else
			{
				sl=fl;
				fl=a[j];
			}
}
printf("%d",sl);
printf("%d",fl);
}
		
	for(i=1;i<5;i++)
	{
		if(a[i]>sl && a[i]!=fl)
		{
			sl=a[i];
		}
	}
	printf("%d",sl);
}*/
