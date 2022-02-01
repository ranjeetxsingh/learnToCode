#include <iostream>
using namespace std;

/*
    returns 'true' if number is prime number
    returns 'false' if number is not a prime number
*/
bool isPrime(int n)
{
    int count = 0;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number to print prime numbers till that value" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}