/*2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
  Test Data :
  Input the last number of the range starting from 1 : 5
  Expected Output:

  The sum of numbers from 1 to 5 : 
  15*/


#include<stdio.h>
int sum(int n)
{
	static int s=0;
	/*if(n>5)
	  {
	  return s;
	  }
	  else
	  {*/
	if(n<=5)
	{
		s=s+n;
		return sum(n+1);
	}
return s;
}

int main()
{
	int n=1;
	n=sum(n);
	printf("%d",n);
}
