//size printing as 4 cox even though we need 1bit smallest addtessible unit in memory is a b yte even though it nedds 1bit it uses whole byte

#include<stdio.h>
struct Flags
{
 int a:2;
 int b:3;
 char c:1;
}A;
int main()
{
printf("size %zu",sizeof(A));
}
