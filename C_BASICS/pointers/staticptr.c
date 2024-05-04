
//we cn extend scope of static var or pointer by returning its adrress

#include<stdio.h>
int * sdm(int x,int y)
{
static int *p;
p=x+y;
return &p;
}
int main()
{
int *k;
int a=5,b=6;
k=sdm(a,b);
printf("%d",*k);
}


/*#include<stdio.h>
   int  sdm(int x,int y)
   {
    int p;
   p=x+y;
   return p;
  }
  int main()
  {
  int k;
  int a=5,b=6;
  k=sdm(a,b);
  printf("%d",k);
  }



//wrong
#include<stdio.h>
int *fff(int x,int y)
{
int *c;
c=x+y;
return &c;
}
int main()
{
int a=4,b=6;
int *k;
k=fff(a,b);
printf("%d",*k);
}*/
