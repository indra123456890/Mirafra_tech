#include<stdio.h>
 int mystrncmp(char s1[],char s2[],int n)
   {
           int i,x;
           for(i=0;s1[i]!='\0'&&s2[i]!='\0',i<n;i++)
          {
                  if(s1[i]>s2[i])
                   {
                          return 1;
                  }
                  if(s1[i]<s2[i])
                  {
                          return -1;
                  }
                  else if(s1[i]==s2[i])
                  {
                          x=0;
                  }
          }
          return x;
  }
  
  int main()
  {
          int r,n;
          char s1[100],s2[100];
          printf("enter the string 1\n");
          scanf("%s",s1);
          printf("enter the string 2\n");
          scanf("%s",s2);
          printf("enter n value");
	  scanf("%d",&n);
	  r=mystrncmp(s1,s2,n);
	  if(r=1)
	  {
		  printf("%s  is greater than %s",s1,s2);
	  }
	  else if(r=-1)
	  {
		  printf("%s  is greater than %s",s2,s1);
	  }
	  else
	  {
		  printf("both are equal");
	  }
  }

