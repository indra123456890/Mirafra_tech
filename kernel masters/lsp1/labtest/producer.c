#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include<signal.h>
#include <sys/types.h>
#include<semaphore.h>

pthread_t a_thread,b_thread;
pid_t pid1,pid2;

void *producer(void *arg);
void *producer1(void *arg);
//void *consumer(void *arg);
//void cons_sig(int sig);
void prod_sig(int sig);
sem_t empty,full;


//int counter = 0;
char buffer[5];

int main()
{
	int res;
	// pthread_t a_thread,b_thread;
	void *thread_result;
sem_init(&full,0,0);
sem_init(&empty,0,0);

	res = pthread_create(&a_thread, NULL, producer, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}

//	res = pthread_create(&b_thread, NULL, consumer, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("Wait for pthread_join\n");
	res = pthread_join(a_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_join(b_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread joined\n");
	exit(EXIT_SUCCESS);
}

void *producer(void *arg) {
	(void) signal(SIGUSR1,prod_sig);
	while(1)
	{
		// printf ("producer: counter:%d\n",counter);
		pause();
	}
}

void prod_sig(int sig)
{
	int i = 0;
	char ch='A';
	while(i<5){
		buffer[i]=ch++;
		i++;
	}
	printf ("P:%s\n",buffer);
	pthread_kill(b_thread,SIGUSR2);

	//pthread_exit("exit");
}

void *producer1(void *arg) {
    int in = 0,value;
    char ch = 'A';
    while(1)
	{
	//	printf ("producer: counter:%d\n",counter); 
	//	while(counter == 26);
		sem_wait(&empty);
  //	        sem_getvalue(&empty,&value);
  //            printf("producer:empty:  value:%d\n",value);
		buffer[in]=ch;
		in = (in+1)% 26;
		if (in == 0)
		{
		printf("%s\n",buffer);
		ch = 'A';
		}
		else
		ch++;
		sem_post(&full);
  //	        sem_getvalue(&full,&value);
    //          	printf("producer:full: value:%d \n",value);
		//counter++;
	}
	
   pthread_exit("exit");	
}





/*void *consumer(void *arg)
{
	pthread_kill(a_thread,SIGUSR1);
	(void) signal(SIGUSR2,cons_sig);
	while(1)
	{
		pause();
	}
}

void cons_sig(int sig)
{

	int i = 0;
	char data[5];

	while(i<5){
		data[i] = buffer[i];
		i++;
	}
	printf ("\tC:%s\n",data);
	pthread_kill(a_thread,SIGUSR1);
	// pthread_exit("exit");
}*/

