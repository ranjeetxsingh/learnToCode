// Print SUM of all elements of an array

#include <iostream>
using namespace std;

// method to calculate sum of an array and return that sum
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0;i<n; i++){
        cin >> arr[i];
    }
    int sum = sumArray(arr, n);
    cout << "Sum of the Array is:  " << sum << endl;
}