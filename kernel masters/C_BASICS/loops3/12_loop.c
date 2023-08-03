#include<stdio.h>
   int main()
   {
   int n1=0,n2=1,n3,n,i;
   printf("enter the no of inputs");
   scanf("%d",&n);
   printf("%d %d\t",n1,n2);
   for(i=2;i<n;++i)
   {
  n3=n1+n2;
  printf("%d\t",n3);
  n1=n2;
  n2=n3;
}
return 0;
}
