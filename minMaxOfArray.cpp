#include <iostream>
using namespace std;

// method to print minimum element of an array
void printMin(int arr[], int size)
{
    int min = arr[0];
    // min = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Element is:  " << min << endl;
}

//method to print maximum element of an array
void printMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Element is:  " << max << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printMax(arr, n); // printing maximum element of an array

    printMin(arr, n); // printing minimum element of an array
}