#include<stdio.h>
int main()
{
char i=1,count;
while(i)
{
i=i<<1;
count++;
}
printf("size of char %d byte\n",count/8);
}
