#include<stdio.h>
int palindrome(char s[])
   {
           int len=0,i;
           for(i=0;s[i]!='\0';i++)
          {
                  len++;
           }
  
          for(i=0;i<len/2;i++)
          {
                  if(s[i]==s[len-1])
                  {
                          return 1;
                  }
 
          }
          return 0;
 
  }
 
  int main()
  {
          char s[40];
          int x;
          printf("Enter string:\n");
          scanf("%s",s);
          x=palindrome(s);
          if(x==1)
          {
                  printf("it is a palindrome");
          }
          else if(x==0)
          {
                  printf("it is not a palindrome");
          }
          return 0;
  }

