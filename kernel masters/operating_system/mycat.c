#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
int w;
char b[10];
w=open(argv[1],O_RDONLY);
read(w,b,10);
write(1,b,10);
close(w);
}


