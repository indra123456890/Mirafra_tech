/*13.WAP Check if the 20th bit of a 32-bit integer is on or off?*/


#include<stdio.h>
int main()
{
	int x,p;
  
	printf("enter a number and position\n");
	scanf("%d%d",&x,&p);
	if(x&(0x00000001<<p))
			printf("ON");
			else
			printf("OFF");
			
}

