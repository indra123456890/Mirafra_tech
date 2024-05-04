
//a local created pointer cannot be returned to main coz  memory it points may be deallocated after function exists.

//instead return type put void and do sum operation on bu sending a var from main through cbr and access it using int *  it automatically reflects changes 3rd program


//or we can also send the local var by sending it as address to fun and accessing through ptr and accessed ptr can be able to return no problem since we sending it back to main only the scope nd lifetime of that is main only so no problem

//or using a static pointer in function
/*#include<stdio.h>
int* sum(int a,int b)
{
int *c;
*c=a+b;
return c;
}
int main()
{
int a=10,b=20;
int *p;
p=sum(a,b);
printf("%d",*p);
}*/

/*#include<stdio.h>
#include<stdlib.h>
int*suum(int a,int b)
{
int *c=(int *)malloc(1*sizeof(int));
*c=a+b;
return c;
//free(c); //mistake
}
int main()
{
int a=10,b=20;
int *p;
p=suum(a,b);
printf("%d",*p);
free(p);
}*/

#include<stdio.h>
void summ(int a,int b,int *s)
{
*s=a+b;
}
int main()
{
int a=10,b=20,s;
//int *p;
int p;
summ(a,b,&s);
printf("%d",s);
}

#include<stdio.h>
int *funn(int *n,int *n1)
{
if(*n>*n1)
return n;
else
return n1;
}
int main()
{
int n=1,n1=2;
int *p;
p=funn(&n,&n1);
printf("%d",*p);
}

