#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>


void *odd(void *arg);
void *even(void *arg);
int i = 1;

int main()
{
	int res;
	pthread_t a_thread,b_thread;
	void *thread_result;

	res = pthread_create(&a_thread, NULL, even, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}

	res = pthread_create(&b_thread, NULL, odd, NULL);
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

void *even(void *arg) {
	while(i<20)
	{
		if(i%2==0)	{
			printf("even:%d\n",i);
			i++;
		}
		else	{
			sleep(1);
		}
	}
	pthread_exit("exit");	
}

void *odd(void *arg) {
	while(i<20)
	{
		if(i%2!=0)
		{
			printf("odd:%d\n",i);
			i++;
		}
		else
		{
			sleep(1);
		}
	}

	pthread_exit("exit");	
}

