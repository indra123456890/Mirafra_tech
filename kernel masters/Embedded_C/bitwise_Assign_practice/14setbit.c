/*14. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

#include<stdio.h>
void binaryprint(int x)
{
int i=0;
while(i<32)
{
if (x&0x80000000)
printf("1");
else
printf("0");

x=x<<1;

i++;
}
}
int main()
{
unsigned int x,y,n,p,mask=0;

printf("please enter the x value \n");
scanf("%d",&x);
printf("x binary \n\n");
binaryprint(x);
printf("\n\nplease enter the y value \n");
scanf("%d",&y);
printf("\ny binary \n");
binaryprint(y);
printf("\n\nenter the x position \n");
scanf("%d",&p);
printf("please enter the number of bits \n\n");
scanf("%d",&n);
x=(x&~(~(~0<<n)<<(p-n)))|((y&~(~0<<n))<<(p-n));
binaryprint(x);
printf("\n");
}

