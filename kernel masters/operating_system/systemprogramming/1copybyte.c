#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int c,char *file[])
{
    char byte; 
    int in, out; 
    int nread;

    in = open(file[1], O_RDONLY); 
    out = open(file[2], O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
    while((nread = read(in,&byte,1)) > 0)
        write(out,&byte,nread);

    exit(0);
}


