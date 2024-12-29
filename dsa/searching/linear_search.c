#include <stdio.h>
#include <stdbool.h>

int array_length(int a[])
{
    int i, length;
    for (i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

bool search(int a[], int e)
{
    int i, length;
    length = array_length(a);
    for (i = 0; i < length; i++)
    {
        if (e == a[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int A[5] = {1, 3, 6, 2, 7};
    int search_element;
    bool search_result;
    printf("\n\nEnter element to search: ");
    scanf("%d", &search_element);

    search_result = search(A, search_element);
    if (search_result)
    {
        printf("Element %d exists in array\n\n", search_element);
    }
    else
    {
        printf("Element %d does not exists in array\n\n", search_element);
    }
}