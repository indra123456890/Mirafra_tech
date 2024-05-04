#include<stdio.h>
union enconvert
{
unsigned int value;
unsigned char r[4];
};

void convertlittletobig(union encovert *converter)
{
char temp;
temp=converter->r[0];
converter->r[0]=converter->r[3];
coverter->r[3]=temp;

temp=coverter->r[1];
converter->r[1]=converter->r[2];
converter->r[2]=temp;
}


int main()
{
union enconvert converter;
converter.value=0x12345678;
convertlittletobig(&converter);
printf("%d",converter.value);
}
