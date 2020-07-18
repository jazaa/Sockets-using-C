#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void myhandler(int mysignal)
{
    printf("myhandler with signal %d\n", mysignal);
}

int main(int argc, char *argv[])
{
    int i = 0;
    signal(SIGTERM, myhandler);
    while (1)
    {
        printf("i = %d\n", i);
        i++;
        sleep(1);
    }
    return 0;
}