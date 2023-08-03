#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include<signal.h>
#include <sys/types.h>
#include <semaphore.h>

pthread_t a_thread,b_thread;

void *odd(void *arg);
void *even(void *arg);

int  x=1;
pthread_mutex_t c,d;
sem_t a,b;

int main() {
    int res;
sem_init(&a,0,0);
sem_init(&b,0,1);

   
    void *thread_result;

    res = pthread_create(&a_thread, NULL, odd, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_create(&b_thread, NULL,even, NULL);
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

void *odd(void *arg) {
	int i;
	//sem_wait(&a);
	for(i=0;i<10;i++)
	{
		sem_wait(&a);//close odd
		pthread_mutex_lock(&c);//lock c
		if(x%2!=0)
		{
			printf("odd:%d\n",x++);
		}
		pthread_mutex_unlock(&c);//unlock c


		sem_post(&b);//open even

	}

}


void *even(void *arg) {

	int i;
	//sem_wait(&b);
	for(i=0;i<10;i++)
	{
		sem_wait(&b);//close even
		pthread_mutex_lock(&d);//lock c
		if(x%2==0)
		{
			printf("even:%d\n",x++);
		}
		pthread_mutex_unlock(&d);//unlock c
		sem_post(&a);//open odd


	}
	//sem_post(&odd);
}

