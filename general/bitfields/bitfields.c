#include<stdio.h>
struct Flags
{
unsigned int flag1:1;
unsigned int flag2:2;
unsigned int flag3:3;
};

int main()
{
struct Flags myflags;
myflags.flag1=1;//1
myflags.flag2=3;//stores binary val of 3 ie 11
myflags.flag3=5;//101
printf("%u",myflags.flag1);
printf("%u",myflags.flag2);
printf("%u",myflags.flag3);
}
