#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    // int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void cleanArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    displayArray(arr, 5);
    cout << endl;
    cleanArray(arr, 5);
}