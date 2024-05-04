/*#include<stdio.h>
void ars(int *p)
{
int i=0;
while(i<5)
{
*(p+i)=i*2;
i++;
}
}
int main()
{
int a[5]={1,2,3,4,5};
int i;
ars(a);
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}*/


/*#include<stdio.h>
int* ars(int *p)
{
int i=0;
while(i<5)
{
*(p+i)=i*2;
i++;
}
return p;
}
int main()
{
int a[5]={1,2,3,4,5};
int i;
int *p;
p=ars(a);
for(i=0;i<5;i++)
{
printf("%d",p[i]);
}
}*/


//newly created array  declared in global we can return in function

/*#include<stdio.h>
int b[5];
int *sim(int a[])
{
int i;
for(i=0;i<5;i++)
{
b[i]=i*2;
}
return b;
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
int *k;
k=sim(a);
for(i=0;i<5;i++)
{
printf("%d",b[i]);
}
}*/

//without return 
/*#include<stdio.h>
int b[5];
void sim(int a[])
{
int i;
for(i=0;i<5;i++)
{
b[i]=i*2;

}
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
//int *k;
sim(a);
for(i=0;i<5;i++)
{
printf("%d",b[i]);
}
}*/

//suppose if we declare inside functio n local array
//if we declre static for local array we can return the array..if not it prints segmentatioln faul,t

/*#include<stdio.h>
int *sim(int a[])
{
static int b[5];
int i;
for(i=0;i<5;i++)
{
b[i]=i*2;
}
return b;
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
int *k;
k=sim(a);
for(i=0;i<5;i++)
{
printf("%d",*(k+i));
}
}*/

//can we return array by declaring it as array of pointers
//no we cant
/*#include<stdio.h>
int *sim(int a[])
{
int *b[5];
int i;
for(i=0;i<5;i++)
{
*(b+i)=i*2;
}
return b;
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
int *k;
k=sim(a);
for(i=0;i<5;i++)
{
printf("%d",*(k+i));
}
}*/


//can we return a array by dynamic allocation
//yes
#include<stdio.h>
#include<stdlib.h>
int *sim(int a[])
{
int *b=(int *)malloc(5);
int i;
for(i=0;i<5;i++)
{
*(b+i)=i*2;
}
return b;
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
int *k;
k=sim(a);
for(i=0;i<5;i++)
{
printf("%d",*(k+i));
}
}


