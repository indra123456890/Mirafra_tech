#include<stdio.h>
#include<stdlib.h>
int main()
{
enum color {green,red,blue};
enum color favorite_color;

printf("plese enter the color");
scanf("%d",&favorite_color);

switch(favorite_color)
{
case green:
printf("your fav color is green\n");
break;
case red:
printf("your fav color is red");
break;
case blue:
printf("your fav color is blue");
break;
default:printf("you didnt choose any color");
}
return 0;
}
