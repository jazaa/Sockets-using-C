#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <semaphore.h>

void *myfunc1(void *ptr);
void *myfunc2(void *ptr);

char buf[24];
sem_t mutex;

int main(int argc, char *argv[])
{
    pthread_t thrd1, thrd2;
    int thret1, thret2;
    char *msg1 = "First thread";
    char *msg2 = "Second thread";

    sem_init(&mutex, 0, 1);

    thret1 = pthread_create(&thrd1, NULL, myfunc1, (void *)msg1);
    thret2 = pthread_create(&thrd2, NULL, myfunc2, (void *)msg2);

    pthread_join(thrd1, NULL);
    pthread_join(thrd2, NULL);

    printf("thret1 = %d\n", thret1);
    printf("thret2 = %d\n", thret2);

    sem_destroy(&mutex);

    return 0;
}

void *myfunc1(void *ptr)
{
    char *msg = (char *)ptr;
    printf("msg: %s\n", msg);
    sem_wait(&mutex);
    sprintf(buf, "%s", "Hello There!");
    sem_post(&mutex);
    pthread_exit(0);
}

void *myfunc2(void *ptr)
{
    char *msg = (char *)ptr;
    printf("msg: %s\n", msg);
    sem_wait(&mutex);
    printf("msg: %s\n", buf);
    sem_post(&mutex);
    pthread_exit(0);
}
