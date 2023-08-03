#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(int c,char *av[])
{
int r,w,f;
w=open(av[1],O_RDONLY);
f=open(av[2],O_RDONLY);
r=read(w,av[2],1000);
write(1,av[2],r);
close(w);
}
