#include <stdio.h>

int binary_search(int a[], int l, int h, int key)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int last_index(int a[])
{
    size_t length = sizeof(&a) / sizeof(a[0]);
    return length;
}

int main()
{
    int a[] = {1, 3, 7, 9, 11, 12, 14, 17, 18, 22, 26, 31, 39, 41, 43, 45, 47, 49};
    int index, search;

    // printf("\n\nEnter the key to search: ");
    // scanf("%d", &search);
    index = last_index(a);

    printf("last index: %d", index);
    return 0;
}