#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,m6,p;
float t;
printf("Enter the marks\n");
scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
t=(m1+m2+m3+m4+m5+m6)/600.0;
p=t*100;
switch(p/10)
{
case 0:
case 1:
case 2:
case 3:
printf("The student is fail\n");
break;
case 4:
printf("the student is Third Division\n");
break;
case 5:
printf("the student is secomd Division\n");
break;
case 6:
case 7:
printf("The student is First Divison\n");
break;
case 8:
case 9:
case 10:
printf("the student is Honour\n");
}
return 0;
}

