#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    printf("\n\nDisplay Elements:\n");
    for (i = 0; i < arr.size; i++)
        printf("Element[%d]: %d\n", i, arr.A[i]);
}

void addElement(struct Array *arr, int element, int index)
{
    int i;
    for (i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i - 1];
    }
    arr->length++;
    arr->A[index] = element;
}

int main()
{
    struct Array arr;
    int i, n, e;

    printf("\nEnter the size of array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("\n\nEnter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    arr.length = n;

    display(arr);

    printf("\n\nAdd element: ");
    scanf("%d", &e);

    printf("\n\nIndex value: ");
    scanf("%d", &i);

    addElement(&arr, e, i);
    display(arr);

    return 0;
}