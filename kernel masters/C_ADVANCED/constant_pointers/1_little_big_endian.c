//1) WAP to check if an   architecture is Little Endian or Big Endian? 
#include<stdio.h>
int main()
{
const int x=0x01;
if(x&0x01)
printf("little endian\n");
else
printf("big endian\n");
}

