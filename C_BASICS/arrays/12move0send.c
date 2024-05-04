#include<stdio.h>
int main()
{
int a[5]={1,0,3,0,5};
int b[2];
int i,k,j=0;
for(i=0;i<5;i++)
{
if(a[i]!=0)
{
b[j]=a[i];
j++;
}

}

//}
/*}
}
for(i=3,j=0;j<=2;i++,j++)
{
a[i]=b[j];
}*/
for(j;j<5;j++)
{
b[j]=0;
}
for(i=0;i<5;i++)
{
printf("%d",b[i]);
}
}

