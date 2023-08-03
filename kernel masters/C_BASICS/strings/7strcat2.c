#include<stdio.h>
 void strrcat(char a[],char b[],int n);
  int main()
  {
  int n;
  char a[100],b[100];
  printf("enter string 1");
  scanf("%s",a);
  printf("enter string 2");
  scanf("%s",b);
  printf("enter characters to concatinate");
  scanf("%d",&n);
  strrcat(a,b,n);
  //printf("%s",a);
  }
  
  void strrcat(char a[],char b[],int n)
  {
  int i,j,l=0;
  for(i=0;a[i]!='\0';i++)
{
  l++;
}
  for(i=l,j=0;j<n&&b[j]!='\0';i++,j++)
  {
  a[i]=b[j];
  }
printf("%s",a);
//a[i]='\0';
  }

