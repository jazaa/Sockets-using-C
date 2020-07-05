#include <stdio.h>
#include <threads.h>
#include <stdlib.h>

struct my_thread_data
{
    double factor;
};

int my_thread_func(void *a)
{
    struct my_thread_data *d = a;
    // do something with d
    printf("we found %g\n", d->factor);
    // return an success or error code
    return d->factor > 1.0;
}

int main(int argc, char *argv[argc + 1])
{
    unsigned n = 4;
    if (argc > 1)
    {
        n = strtoull(argv[1], 0, 0);
    }
    // reverse space for the arguments for the threads
    struct my_thread_data D[n];
    for (unsigned i = 0; i < n; ++i)
    {
        thrd_create(&id[i], my_thread_func, &D[i]);
    }
    // Wait that all threads have finished, but throw away their
    // return values
    for (unsigned i = 0; i < n; ++i)
    {
        thrd_join(id[i], 0);
    }
    return EXIT_SUCCESS;
}