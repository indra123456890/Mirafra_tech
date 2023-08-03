#include<stdio.h>
   int main()
   
   {
           int a,b,c,d,x,y,z;
          printf("enter 4 numbers:");
          scanf("%d%d%d%d",&a,&b,&c,&d);
          x=a>b?a:b;
          y=x>c?x:c;
          z=y>d?y:d;
          printf("the bigger number is:%d\n",z);
}
