/*the static storage class is used to define variables that have a lifetime that extends throughout the entire program's execution, but they have limited scope within the block they are defined in.*/

/*The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

The static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to the file in which it is declared.

In C programming, when static is used on a global variable, it causes only one copy of that member to be shared by all the objects of its class.*/



/*#include<stdio.h>
int fun ();
static int count=5;
int main()
{
	while(count--)
	{
		fun();
	}
	return 0;
}

int fun(void)
{
	static int i=5;
	i++;
	printf("i is %d and count is %d\n",i,count);
}*/



#include<stdio.h>
void fun(void)
{
static int a=0;//this is statcic varaiable local to function but has static storage class so its value persit across function calls
int b=0;
a++;
b++;
printf("%d\n%d\n",a,b);
}

int main()
{
fun();
fun();
}
