#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {2, 5, 6, 8, 2, 5};
    int size = 6, element = 1, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    return 0;
}