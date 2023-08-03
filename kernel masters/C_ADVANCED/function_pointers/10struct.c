/*10) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).
*/
#include<stdio.h>
#include<stdlib.h>
int average(int *p,int c)
{
	int i,sum=0,avg=0;
	for(i=0;i<c;i++)
	{
		sum=sum+p[i];
	}
	avg=(sum)/c;
	return avg;
}
int main()
{
	int **p=NULL;
	int i,j,r,c;
	int avg1,avg2,index;
	printf("enter the number of students\n");
	scanf("%d",&r);
	p=(int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
	{
		printf("number of subjects attended by student%d\n",i+1);
		scanf("%d",&c);
		p[i]=(int *)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			printf("enter the marks of subject%d:",j+1);
			scanf("%d",&p[i][j]);
		}
		if(i==0){
			avg1=average(p[i],c);
			index=i;
			}
		if(i>0)
		{
			avg2=average(p[i],c);
			if(avg2>avg1)
			{
				index=i;
				avg1=avg2;
			}
		}
	}
	printf("the topper is student%d with average=%d\n",index+1,avg1);
	return 0;
}

