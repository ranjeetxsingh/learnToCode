// linear search
#include <iostream>
using namespace std;

// linear search code
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {2, 89, 45, 11, 7, 9, 46, 78, 12, 6};
    cout << "Enter the element you want to search for " << endl;
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Element is present in the array" << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }
}