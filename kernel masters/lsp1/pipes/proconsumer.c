#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

void *producer(void *arg);
void *consumer(void *arg);
int counter = 0;
char buffer[5];
int ret=0;

int main() {
    int res;
    pthread_t a_thread,b_thread;
    void *thread_result;

    int re = mkfifo("./myfifo", 0777);

    res = pthread_create(&a_thread, NULL, producer, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_create(&b_thread, NULL, consumer, NULL);
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

void *producer(void *arg)
{
   char abc[3]="123";
ret=open("./myfifo",O_RDWR);
write(ret,abc,3);

   pthread_exit("exit");
}
void *consumer(void *arg)
{
char buff[3];
read(ret,buff,3);
printf("read=%s\n",buff);
   
   pthread_exit("exit");
}

