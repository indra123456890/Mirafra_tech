
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6;
	float x,y,z;
	printf("enter 6 subject marks:");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);

	x=m1+m2+m3+m4+m5+m6;
	y=x/600;
	z=y*100;

	if(z>=80&&z<=100)
	{
		printf("percentage is %f grade is honours\n",z);
	}
	else
		if(z>=60&&z<80)
		{
			printf("percentage is %f grade is first dividion\n",z);
		}
		else
			if(z>=50&&z<60)
			{
				printf("percentage is %f grade is second division\n",z);
			}
			else
				if(z>=40&&z<50)
				{
					printf("percentage is %f grade is third division\n",z);
				}
				else
					if(z>=0&&z<40)
					{
						printf("percentage is %f grade fail\n",z);
					}
	return 0;
}
