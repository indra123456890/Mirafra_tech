/*9.WAP multiply a number by 9 using bit shift.*/

#include<stdio.h>
int main()
{
	int n;
	printf("please enter the number\n");
	scanf("%d",&n);
	
	printf("9 x %d = %d\n",n,((n<<3)+n));

}

