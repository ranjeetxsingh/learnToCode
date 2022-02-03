// Reversing an Array

#include <iostream>
using namespace std;

// method to reverse an array
void reverseArray(int arr[], int size)
{
    int lastIndex = size - 1;
    size = size / 2;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        arr[i] = arr[lastIndex - i];
        arr[lastIndex - i] = temp;
    }
}

// method to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array :-" << endl;
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "\nReversed Array :-" << endl;
    printArray(arr, n);
}