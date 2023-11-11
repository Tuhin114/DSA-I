#include <iostream>
using namespace std;
int main()
{
    // int a;
    // cin >> a;
    // cout << "value of n is :" << n << endl;

    // if a is positive
    // if (a > 0)
    // {
    //     cout << "A is a Positive number" << endl;
    // }
    // else
    // {
    //     cout << "A is not a negative number" << endl;
    // }

    // int a, b;

    // cout << "Enter the value of a " << endl;
    // cin >> a;

    // cout << "Enter the value of b " << endl;
    // cin >> b;

    // if (a > b)
    // {
    //     cout << "The larger number is: a " << endl;
    // }
    // else
    // {
    //     cout << "The larger number is: b " << b << endl;
    // }

    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "a is a positive number" << endl;
    }
    else
    {
        if (a == 0)
        {
            cout << "a is zero" << endl;
        }
        else
        {
            cout << "a is a negative number" << endl;
        }
    }

    return 0;
}