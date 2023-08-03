/*DATE:25-11-2022*/			/*TOPIC:BITWISE OPERATORS*/

/*1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator?*/
#include<stdio.h>

#define SET_BIT(x,p) (x|(0x1<<p))
#define CLEAR_BIT(x,p) (x&(~(0x1<<p)))
#define TOGGLE_BIT(x,p) (x^(0x1<<p))


int main()
{
int x,p;
printf("enter the number and position\n");
scanf("%d%d",&x,&p);
printf("SET_BIT=%d\n",SET_BIT(x,p));
printf("CLEAR_BIT=%d\n",CLEAR_BIT(x,p));
printf("TOGGLE_BIT=%d\n",TOGGLE_BIT(x,p));
}

