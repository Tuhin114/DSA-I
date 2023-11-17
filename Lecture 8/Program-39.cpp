#include <iostream>
using namespace std;

// 1-> Prime No.
// 0-> Not a prime No.
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << " is a Prime No." << endl;
    }
    else
    {
        cout << " is not a Prime No." << endl;
    }
}