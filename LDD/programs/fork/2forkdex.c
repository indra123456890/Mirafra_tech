#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t q;
q=fork();
if(q<0)
{
printf("perror");
}
else if(q==0)
{
printf("child hving pid %d\n",getpid());
printf("my parent id is %d\n",getppid());
}
else
{
printf("parent having pid is %d\n",getmpid());
printf("my child pid is %d\n",q);
}
}
