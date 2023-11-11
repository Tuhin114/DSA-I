#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2;
    // if (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Entered value is a prime number" << endl;
    //     }
    //     else
    //     {
    //         i = i + 1;
    //     }
    // }
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number for" << i << endl;
        }
        else
        {
            cout << "prime for " << i << endl;
        }
        i++;
    }
}