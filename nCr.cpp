#include <iostream>
using namespace std;

/* 
    method to calculate factorial of a number.
    5! --> 5*4*3*2*1 = 120
    3! --> 3*2*1 = 6
*/
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
}


/*
    method to calculate nCr value using method factorial(int n)
    8C2 --> (8!)/((2!)*(6!)) = 28
*/
int nCrCalc(int n, int r)
{
    if (r == 0)
    {
        return 1;
    }
    else
    {
        int nr = n - r;
        int nFact = factorial(n);
        int rFact = factorial(r);
        int nrFact = factorial(nr);

        int calc = (nFact) / ((rFact) * (nrFact));
        return calc;
    }
}

int main()
{
    int n, r;
    cout << "Welcome !!! I can calculate nCr value for you \n Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;
    int answer = nCrCalc(n, r);
    cout << answer;
}