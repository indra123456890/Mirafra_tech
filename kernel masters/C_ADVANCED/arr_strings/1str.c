/*1) Declare a 2 dimenstional character array. Initialise it with strings. Sort the array in ascending order of strings and print it  back.*/

#include<stdio.h>
#include<string.h>
#define N 5
#define S 10
int main()
{
int i,j,x;
char c[10];
char arr[N][S]={"sunday","monday","tuesday","wednesday","thursday"};
/*printf("before sorting");
for(i=0;i<N;i++)
{
printf("%s",arr[i]);
}
printf("\n");
}*/

for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
x=strcmp(arr[i],arr[j]);
if(x<0)
{
strcpy(c,arr[i]);
strcpy(arr[i],arr[j]);
strcpy(arr[j],c);
}
}
}
printf("after sorting\n");
for(i=0;i<N;i++)
{
printf("%s\n",arr[i]);
}
}





