/*1)"1. Need to display different welcome messages depending on the operating system. Define the macro inside the code and compile the following into 3 different executables.
for WINDOWS : Microsoft Windows Welcomes you
for Linux : Linux Welcomes you
for Mac : Mac Welcomes you"*/

#include<stdio.h>
#define v 1
int main()
{
#if(v==1)
{
printf("Microsoft windows welcomes you");
printf("\n1\n");
}
#elif(v==2)
{
printf("linux welcomes you");
}
#elif(v==3)
{
printf("Mac welcomes you");
}
#endif
}
