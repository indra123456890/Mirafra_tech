#include<stdio.h>
enum days {monday,tuesday=5,wednesday,thursday,friday};
int main()
{
enum days today;
today=thursday;
printf("%d",today);
}
