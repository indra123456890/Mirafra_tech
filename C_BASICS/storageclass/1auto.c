#include<stdio.h>
int main()
{
auto int j=1;
{
auto int j=2;
{
auto int j=3;
printf("%d",j);
}
printf("%d",j);
}
printf("%d",j);
}
