#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 34, 45, 232, 5, 123, 56, 123, 67, 213};
    int size = sizeof(arr) / sizeof(int);
    int element = 45;

    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d .", element, searchIndex);

    return 0;
}