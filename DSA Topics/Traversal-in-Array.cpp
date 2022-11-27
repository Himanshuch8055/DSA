#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100] = {2, 5, 6, 7, 2, 9};
    display(arr, 6);
    return 0;
}