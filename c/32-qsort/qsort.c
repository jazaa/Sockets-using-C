#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
    int aa, bb;
    aa = *(int *)a;
    bb = *(int *)b;
    return aa - bb;
}

int main(int argc, char *argv[])
{
    int nums[] = {5, 7, 89, 21, 45, 6, 9, 99, 12, 56};
    printf("Before Sort\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nums[i]);
    }
    printf("\n\n");
    qsort(nums, 10, sizeof(int), comparefunc);
    printf("After sort\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nums[i]);
    }
    return 0;
}