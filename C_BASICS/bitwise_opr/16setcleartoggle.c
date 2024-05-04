/*#include<stdio.h>
  int main()
  {
  unsigned int n;
  int p=3;
  printf("enter value");
  scanf("%x",&n);
  printf("enter position");
  n=n|(1<<p);
  printf("after set %d",n);
  }*/


#include<stdio.h>
  int main()
  {
 unsigned int n=5;
  int p=2;
 // printf("enter value");
  //scanf("%x",&n);
  //printf("enter position");
  n=n&(~(1<<p));
  printf("after clear %x",n);
  }


/*#include<stdio.h>
int main()
{
	unsigned int n;
	int p=2;
	printf("enter value");
	scanf("%x",&n);
	n=n^(1<<p);
	printf("after toggle %d",n);
}*/
 
