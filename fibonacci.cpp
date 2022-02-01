#include <iostream>
using namespace std;

/* function to print the fibonacci series till nth term
if input is 1 , output is ----> 0
if input is 2 , output is ----> 0 1
if input is 5 , output is ----> 0 1 1 2 3
 */
void fibonacci(int n)
{

    int currentTerm = 0;
    int nextTerm = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << currentTerm << " ";
        int temp = currentTerm;
        currentTerm = nextTerm;
        nextTerm = nextTerm + temp;
    }
}

int main()
{
    int n;
    cout << "Enter a number to print fibonacci series till nth term" << endl;
    cin >> n;
    fibonacci(n);
}