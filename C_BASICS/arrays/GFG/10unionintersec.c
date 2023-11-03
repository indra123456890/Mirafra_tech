/*Union and Intersection of two sorted arrays
Read
Discuss(190+)
Courses
Practice
Video
Given two sorted arrays, find their union and intersection.
Example:

Input: arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output: Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}

Input: arr1[] = {2, 5, 6}
        arr2[] = {4, 6, 8, 10} 
Output: Union : {2, 4, 5, 6, 8, 10} 
         Intersection : {6}*/

#include<stdio.h>
int main()
{
int a[5]={1,3,4,5,7};
int b[4]={2,3,5,6};
int c[9];
int i,j,k=0,l=0;
for(i=0;i<5;i++)
{
for(j=0;j<4;j++)
{
if(a[i]==b[j])
{
printf("intersection %d",a[i]);
}
}
}
while(k<5&&l<4)
{
if(a[k]!=b[l]||a[k]==b[l])
{

}
k++;
l++;
}
}


