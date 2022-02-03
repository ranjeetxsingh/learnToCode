// swapping alternate elements in array
/*
    input -->  {1,2,3,4,5,6}
    output --> {2,1,4,3,6,5}

    *note* :- considering size of array is even
*/

#include <iostream>
using namespace std;

// method to swap alternate elements
void swapAltElArray(int arr[], int size)
{
    int start = 0;
    while (start < size)
    {
        int temp = arr[start];
        arr[start] = arr[start + 1];
        arr[start + 1] = temp;
        start = start + 2;
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

//method to input array elements
void inputArray(int arr[], int size)
{
    cout << "Enter Array Elements" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter size of Array" << endl;
    cin >> size;
    int arr[size];
    inputArray(arr, size);
    cout << "Original Array" << endl;
    printArray(arr, size);
    swapAltElArray(arr, size);
    cout << "\n Swapped array" << endl;
    printArray(arr, size);
}
