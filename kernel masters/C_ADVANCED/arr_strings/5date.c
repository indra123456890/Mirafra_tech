/*5) WAP to read a date and print in the below format:
input : 1-3-2001
output: 1st March, 2001*/

#include<stdio.h>
int main()
{
	int i,a[3];
	char *m[20]={"jan","feb","mar","april","may","june","july","aug","sep","oct","nov","dec"};
	printf("enter the date D-M-Y");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	switch(a[0])
	{
		case 1:
		case 21:
		case 31:printf("st");break;
		case 2:
		case 22:printf("nd");break;
		case 3:
		case 23:printf("rd");break;
		default:printf("th");break;
	}
	printf(" %s, %d\n",m[a[1]-1],a[2]);
}
