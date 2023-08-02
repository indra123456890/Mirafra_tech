#include<stdio.h>
int main()
{
	int a[10]={0,0,1,0,1,1,1,0,1,1},i,j=0,k=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
			j++;
		else{
			k++;
		}
	}
	if(j<k){
		for(i=0;i<(j+j);i++)
		{
			a[i]=0;
			a[i+1]=1;i++;
		}

		for(i=0;i<(j+j);i++){
			printf("%d ",a[i]);}
	}
	else{
		for(i=0;i<(k+k);i++)
		{
			a[i]=1;
			a[i+1]=0;i++;
		}
		for(i=0;i<(k+k);i++){
			printf("%d ",a[i]);}
	}
}
