#include<stdio.h>
  void swapcbv(int a, int b);
  void swapcbr(int *p1,int *p2);
  int main()
  {
  int a,b;
  printf("enter a,b values");
  scanf("%d %d",&a,&b);
  printf("before swapping");
  swapcbv(a,b);
  printf("after swapcbv a=%d\n b=%d\n",a,b);
  swapcbr(&a,&b);
  printf("after swapcbr a=%d\n b=%d\n",a,b);
  }
  
  
  void swapcbv(int a,int b)
  {
  int c;
  c=a;
  a=b;
  b=c;
  }
  
  
  void swapcbr(int *p1,int *p2)
  {
  int c;
  {
  c=*p1;
  *p1=*p2;
 *p2=c;
}
}
