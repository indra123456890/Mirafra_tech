#include<stdio.h>
int main()
{
char c;
int i,n;
i=0;
printf("enter no of characters:");
scanf("%d",&n);
while(i<n)
{
printf("enter a character:");
getchar();
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("it is a alphabet\n");
}
else
{
printf("it is not a alphabet\n");
}
i++;
}
return 0;
}

