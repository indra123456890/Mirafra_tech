#include<stdio.h>
int main()
{
int *p1,a=10;
float *p2,b=1.34;
char *p3,c='f';
p1=&a;
p2=&b;
p3=&c;
printf("int var:%ld\nfloat var:%ld\nchar var:%ld\n",sizeof(a),sizeof(b),sizeof(c));
printf("int size:%ld\nfloat size:%ld\nchar size:%ld\n",sizeof(*p1),sizeof(*p2),sizeof(*p3));
}

