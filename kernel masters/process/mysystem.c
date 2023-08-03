#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<sys/types.h>
int mysystem(char *s);
int main()
{
printf("Running ps with system\n");
mysystem("ps -eaf");
printf("Done\n");
exit(0);
}
int mysystem(char *s)
{
int stat_val;
pid_t pid;
pid=fork();
if(pid!=0)
wait(&stat_val);
else
execl("/bin/sh", "sh", "-c",s, (char *) 0);
return 0;
}

