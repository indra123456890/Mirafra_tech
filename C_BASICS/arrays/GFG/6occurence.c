//Count number of occurrences (or frequency) in a sorted array

/*Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. Expected time complexity is O(Logn) 

Examples: 
  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
  Output: 4 // x (or 2) occurs 4 times in arr[]

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
  Output: 1 */


#include<stdio.h>
int main()
{
int a[5]={1,2,2,3,4};
int n,c=0,i;
printf("enter element to search");
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(n==a[i])
{
c++;
}
}
printf("%d occurs %d times",n,c);
}
