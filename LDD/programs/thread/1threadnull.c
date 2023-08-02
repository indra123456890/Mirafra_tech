/*program to create a thread.thread prints 0-4 while main prints 20-24*/

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_function(void *arg);
void *thread_function1(void *arg);
	int i,j;
int main()
{
	pthread_t a_thread,b_thread;
	pthread_create(&a_thread,NULL,thread_function,NULL);
	pthread_create(&b_thread,NULL,thread_function1,NULL);
	pthread_join(a_thread,NULL);
	pthread_join(b_thread,NULL);
	printf("inside main program\n");
	for(j=20;j<25;j++)
	{
		printf("%d\n",j);
		sleep(1);
	}
}
void *thread_function(void *arg)
{
	printf("inside thread\n");
	int i=0;
	for(i=0;i<100;i++)
	{
		printf("%d\n",i);
//	sleep(1);
	}
	pthread_exit(0);
}
void *thread_function1(void *arg)
{
	printf("inside thread1\n");
	int i=0;
	for(i=0;i<100;i++)
	{
		printf("%d\n",i);
//		sleep(5);
	}
	pthread_exit(0);
}

