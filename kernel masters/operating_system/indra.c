#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
int r,o,w,c;
char b[10];
w=open(argv[1],O_RDONLY);
r=read(w,b,10);
write(1,b,r);
close(w);
}
